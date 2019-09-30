from os import urandom
from ctypes import CDLL
import string
import hashlib
from itertools import product
import string 


ls = ['DIJKQQTUVWXXXffiwz', 'FJMOWdfgilmmosxx', 'DEKLRRUYaacdhhilnttxy', 'HLMPQRRVXYZabcdefghijjkllmnopqqqqrstuuvvwxyz', 'ACGGPPPRTVZaglppvw']#these are the characters for each postion of the key which produce an unprintable character while XORing with the ciphertext  
l1 = ['abcdeghjklmnopqrstuvxyABCEFGHLMNOPRSYZ', 'abcehjknpqrtuvwyzABCDEGHIKLNPQRSTUVXYZ', 'befgjkmopqrsuvwzABCFGHIJMNOPQSTVWXZ', 'ABCDEFGIJKNOSTUW', 'bcdefhijkmnoqrstuxyzBDEFHIJKLMNOQSUWXY']#this is the list of combination of charcters for each postion
l2 = [i+j+k+l+m for i in l1[0] for j in l1[1] for k in l1[2] for l in l1[3] for m in l1[4]]# all the possible key combinations
key = ""
ciphertext = ""
plaintext = ""
#print len(l2)

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
            if ord(x[j])^int(key_list[j%5], 16) not in range(32,127):s
                k = 0
        if k == 0:
            print "non-display character"
            break

        print plaintext,k
        text = plaintext

        if hashlib.md5(text).digest().encode("hex") == "d444d1ac3799a86d31f34b4a8a3243c6":
            print plaintext
            print "You got the plaintext"
            break
        k += 1



if __name__ == "__main__":
    ciphertext = "05181c2638270301601329023a203c2324072229230401273f2a1b0b02252b071e243e2313262923352411332336031b2f2d27191602383f07062e0827041725092e161e2d2f281017092f34123b321e2e12342d2b210c0b0e3f191f33370f1935000e2123392d132f163213152308302d0a0f3f282a0e183b"
    ciphertext = bytearray.fromhex(ciphertext).decode()
    xor_decrypt(ciphertext)

