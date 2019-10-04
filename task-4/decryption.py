from os import urandom
from ctypes import CDLL
import string
import hashlib
from itertools import product
import string 


l1 = ['sabefgijklmnopqrtuvwyABCDEFGHIJKLMNOPQRSTVWXYZ', 'ANBCDEFGHIJKLMOQRSUVWXYZ', 'AMCDEFHIJKLNOPQRSTUWXYZ', 'adbcefghijklmnopqrstuvyz', 'ahbdefgijklmnopquvwxyzABCDFGHIJKLMNOPQRSTUVWXYZ']

l2 = [i+j+k+l+m for i in l1[0] for j in l1[1] for k in l1[2] for l in l1[3] for m in l1[4]] #all the combination of 
key = ""
ciphertext = ""
plaintext = ""

def xor_decrypt(x):
    global key
    global ciphertext
    global plaintext
    
    k = 1
    plaintext = ""

    for key in l2:

        plaintext = ""

        hex_key = key.encode("hex")
        key_list = [hex_key[i]+hex_key[i+1] for i in range(0,len(hex_key),2)]

        for j in xrange(len(x)):
            plaintext += chr(ord(x[j]) ^ int(key_list[j%5], 16))

        print plaintext,k

        text = plaintext
        if hashlib.md5(text).digest().encode("hex") == "067abbb88d2201a393ba660728f83b84":
            print plaintext
            print "You are a Genius"
            break

        k += 1



if __name__ == "__main__":

    ciphertext = "2a2138440b1c233d080d072b29441c1b2b6d250c052f23070d176e152b3a"
    ciphertext = bytearray.fromhex(ciphertext).decode()
    xor_decrypt(ciphertext)
