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
I figured out how to decrypt a ciphertext into a plaintext from a specific key.The other task was find key for the given ciphertext. I used brute forcing method but the total number of combinations was 52**5 which is very huge. So I had to filter down the combinations. I xored the whole alphabets (the only characters in the key) with the the ciphertext and found the characters which printed non-display characters (acsii not in 32-126)
for a specific position of the key. Using this data I created a list of all the key combinations which was about 30 million, which is way less than before but stil huge. Even I iterated through all the key combinations but still did not get the required plaintext.
