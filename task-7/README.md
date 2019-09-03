## 7. Rusted Email
Patterns are really fun to work with and finding one in real life gives you extreme happiness.
There exists a unique pattern with email ids too. It would be wonderful if you can write a
program in Rust to find whether the given input is an email or not.
Example: good@email.com is a VALID EMAIL

Hint: https://docs.rs/regex/1.1.9/regex/


### Approach to solution

Learned about Regular Expressions and rust programming language.
I Installed rust but was not able to compile the program due to 'linker.exe' error and that VS should be installed on my system.I downloaded and installed Visual Studio Builder tools but still nothing changed. 
So I had to compile the code online, and the site which supported regex didn't allow inputs, so I had to make the script without input.

I completed the input functionality as of now.


#### Email syntax
An email address has three parts:
- The local part
- '@' symbol
- the domain name

#### The local Part

- [x] Upper and lower case latin letters **A-Z** and **a-z**
- [x] The digits **0-9**
- [x] printable symbols **!#$%&'*+-/=?^_`{|}~**
- [ ] '**.**' cannot appear at the beginning or the end and consicutively

#### '@' Symbol

- [x] Should be present between the **local part** and the **domain**

#### The Domain Name 

- [x] Upper and lower case latin letters **A-Z** and **a-z**
- [ ] digits 0 to 9, provided that **top-level domain**(.com,.org) names are not all-numeric
- [ ] hyphen -, provided that it is not the first or last character.


I could not create a script to verify all these but it verifies the important ones.

The program checks if a string(the email id) satisfies the the regex, if it does prints "**Email Address is Valid.**",else prints "**Email Address is Invalid.**".
