from os import urandom
from ctypes import CDLL
import string
import hashlib
from itertools import product
import string


def nonDisplay(x):
    l = ['','','','','']
    l1 = ['','','','','']

    
    for i in string.ascii_uppercase+string.ascii_lowercase:
        k = 0
        for j in range(len(x)):
            if ord(x[j])^int(i.encode('hex'), 16) not in range(32,127):
                l[j%5] += i 


    
    for j in range(5):
        for i in string.ascii_lowercase+string.ascii_uppercase:
            if i not in l[j]:
                l1[j] += i
    print l1
        


  
if __name__ == "__main__":

    ciphertext = "2a2138440b1c233d080d072b29441c1b2b6d250c052f23070d176e152b3a"
    ciphertext = bytearray.fromhex(ciphertext).decode()
    nonDisplay(ciphertext)
