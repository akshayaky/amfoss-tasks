## 4. Advanced XOR:
a. Read the encryption script "xor_adv.py" and try to understand how the encryption is
really working.

b. You have been given the ciphertext in "ciphertext.txt" which has been encrypted using
the script mentioned in Point Number 1

c. Try finding the key length and then the plaintext to get the flag (You will have to make
a python script for this)

d. After you get the flag, run the script "check_hash.py" and submit your flag there!

e. Encryption, Ciphertext and ChekFlag script here



### Approach
The problem is basically to convert the ciphertext created from the given script back to plaintext. The key which is used to convert the plaintext is generated using urandom,so running the script each time will generate different ciphertext for the same plaintext because the key changes each time.

So the first task was to obtain the plaintext from the ciphertext using any key. For this I used another plaintext and encrypted it. Since I had the key,I decrypted it. It was just to xor the ciphertext with the key.

But the real problem was to obtain the key that was used to encrypt the plaintext.

Brute forcing all the key combinations and generating the plaintext was an option. But it would contain 330 million combinations which would take a very long time to run. So I had to filter the keys.

For filtering, I XORed the whole alphabets(capital and small) with the ciphertext and checked if that produces an unprintable character.If it does
the script stored that in a list. Inside the list each of the elements is a string containing all the charaters which produces an unprinatable character for each position of the key.From that a list containing the characters which can produce possible key combination is generated.This is done by the test.py script.

This reduced the key combinations to 30 million.

The ciphertext provided was defective so I created a ciphertext myself and after proper changes I got the plaintext.
