## Vigenere

Implement a program which converts a string using [vigenere](https://lab.cs50.io/cs50/labs/2019/x/vigenere/) cipher.

### Approach
1. Checks if the program was run with a single argument in which all the characters are alphabets.
2. Converts the alphabets in the above string into integers which will be used as strings.
3. Gets the input of plaintext from the user.
4. Uses a for loop to iterate over each character of the plaintext and the key is also iterated along with it.
5. The character is modified only if it is an alphabet.
