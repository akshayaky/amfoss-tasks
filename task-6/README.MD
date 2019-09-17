## 6. CLI App using Go
Using the flags package in Go, build a command line tool that prints the details (count of
followers, user handle, etc) of a Twitter user. You must give the Twitter handle as input to the
flag. The output must be written to a text file (learn about file handling in Go).
Resources:
https://tour.golang.org/ (basic understanding of Go syntax)
https://gobyexample.com/command-line-flags (learn about the flags package)

### Approach

Created a CLI app which takes the twitter handle as input and gives the output in a text file userDetails.The output includes the Name ,description, count of followers and following,Location, URL in the profile and time and date of Creation of account.

I had to first authenticate with twitter which needed a twitter Developer account. After the authentication part, I was able to print the user details from the twitter- handle hard-coded into the script.Then I used the flag package for input and was able to display the details of the inputted twitter-handle. I proceeded with the writing into the file. I used the os package for this.

All this done I completed the task.

### How to run the program

To run the program use the following command

``` go run appp.go -user Twitter-handle ```

where in place of Twitter-handle use the twitter-handle of the user.
This will display details of the user and will also save the details in a textfile named userDetails.
