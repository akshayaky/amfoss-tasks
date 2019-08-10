## 12. Python Source
a. In this challenge, you are expected to find a string whose hash is similar to a given hash
in the program, which when passed as input to program produces the output "You are
a Genius"

b. [Download the python code here](https://drive.google.com/file/d/0B3sOPp4yzeLTdHZiazhmNFZ2VEE/view?usp=sharing)


### Solution

The solution script prints the decoded string which was encoded using [this script](https://drive.google.com/file/d/0B3sOPp4yzeLTdHZiazhmNFZ2VEE/view?usp=sharing).

I did the following steps to create the solution script:

1. Identified the way in which a plaintext was encoded into the ciphertext in the script.
2. There were mainly three steps:
   - function shift which increments the character,according to whether it is a digit or an alphabet,by 3.
   - function xor which performs xor operations on the characters of the plaintext
   - function encode which converts the string into a hexadecimal.
   
   These functions are in the order of their execution.
   
3. So to decode the ciphertext, I created functions corresponding to shift and encode,used the same function xor and passed the ciphertext in the reverse order of previous execution.
4. The function corresponding to:
   - shift decrements the character by 3 and
   - encode converts back from hex.
5. The output of the script satisfies the condition in the script given, which means the solution script decodes the string encoded by the script given.
