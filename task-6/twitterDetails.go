package main

import (
	"flag"
	"fmt"
	"log"
	"os"
	"strconv"

	"github.com/dghubble/go-twitter/twitter"
	"github.com/dghubble/oauth1"
)

//a struct for storing the credentials for verifying with twitter
type Credentials struct {
	ConsumerKey       string
	ConsumerSecret    string
	AccessToken       string
	AccessTokenSecret string
}

func main() {

	//input of the twitter handle occurs here
	input := flag.String("user", "twitterapi", "Twitter Handle. This input will provide the the details of that user.")
	flag.Parse()

	//initialising the credentials
	creds := Credentials{
		AccessToken:       "",
		AccessTokenSecret: "",
		ConsumerKey:       "",
		ConsumerSecret:    "",
	} //these credentials should be entered here before running the progra

	client, err := getClient(&creds, input)
	if err != nil {
		log.Println("Error getting Twitter Client")
		log.Println(err)
	}
	_ = client

}

func getClient(creds *Credentials, input *string) (*twitter.Client, error) {

	config := oauth1.NewConfig(creds.ConsumerKey, creds.ConsumerSecret)
	token := oauth1.NewToken(creds.AccessToken, creds.AccessTokenSecret)

	httpClient := config.Client(oauth1.NoContext, token)
	client := twitter.NewClient(httpClient)

	verifyParams := &twitter.AccountVerifyParams{
		SkipStatus:   twitter.Bool(true),
		IncludeEmail: twitter.Bool(true),
	}

	user, _, err := client.Accounts.VerifyCredentials(verifyParams)
	if err != nil {
		return nil, err
	}

	user, resp, err := client.Users.Show(&twitter.UserShowParams{
		ScreenName: *input,
	})

	if err != nil {
		log.Println(err)
		fmt.Printf("User not found!!!\n")
		return client, nil
	}
	_ = resp
	fmt.Printf("\n%+v\n\n%+v\n\n%+v\n\n", user.Name, user.Description, user.FollowersCount)
	fmt.Printf("%+v\n\n%+v\n\n", user.FriendsCount, user.Location)

	f, err := os.Create("userDetails")
	if err != nil {
		fmt.Println(err)
		f.Close()
		return client, nil
	}

	//Array all the user details that is to be written in a text file
	details := []string{"Twitter Handle : ", user.ScreenName, "Name :", user.Name, "Description :", user.Description, "followers :", strconv.Itoa(user.FollowersCount), "following :", strconv.Itoa(user.FriendsCount), "Location :", user.Location, "URL :", user.URL, "Created At :", user.CreatedAt}

	//loop which iterates over all the elements of the array details and writes it into a file,goes to newline after every two elements
	for k, v := range details {
		if k%2 == 0 {
			fmt.Fprintln(f, "\n")
		}
		fmt.Fprintf(f, v)
		if err != nil {
			fmt.Println(err)
			return client, nil
		}
	}

	fmt.Fprintln(f)
	err = f.Close()
	if err != nil {
		fmt.Println(err)
		return client, nil
	}

	fmt.Println("\nThese details are stored in a file named userdetails.")

	return client, nil
}
