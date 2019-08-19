## 5. Get it using Javascript:

a. In this challenge, you need to generate a web page using the GitHub API. Please use the
latest version, GraphQL for accessing the data.
https://developer.github.com/v4/
b. Write a function to take GitHub username as an argument and display the information
of the user (anyone valid information). If no user exists, return “No person exists”.

i. Username

ii. Name

iii. Avatar

iv. Bio

v. Identicon

### Approach

I tried using the GraphQL playground to create a Query which returns the details of the github user. The Query took the github username of the 
user.

I used HTML to create a website and Javascript to run as script.I needed authentication to access the deatils, so I 
generated a OAuth token from github and used this for authentication.
I was able to view the details of the user,but when it came to hosting it didn't work.
This was because when I committed the HTML file to github the authentication code was revoked.
