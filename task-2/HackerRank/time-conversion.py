

def timeConversion(s):
    newtime = s[:-2]
    if "AM" in s and int(s[0:2])==12:
        newtime = str(0)+str(0) + s[2:-2]

    elif "PM" in s and int(s[0:2])<12:
        newtime = str(12 + int(s[0:2])) + s[2:-2]

    return newtime

s = input()

print(timeConversion(s))
