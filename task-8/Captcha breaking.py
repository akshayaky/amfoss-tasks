try:
    import Image
except ImportError:
    from PIL import Image
import pytesseract



def isnum(a):
    if a.isdigit():
        return 1
    return 0


def isoper(a):
    if i in ['+','-','/','+']:
        return 1
    return 0


def result():
    if oper == '+':
        return num[0]+num[1]
    elif oper == '-':
        return num[0]-num[1]
    elif oper == '*':
        return num[0]*num[1]
    elif oper == '/':
        return num[0]/num[1]


x = pytesseract.image_to_string(Image.open('num.png'))
num = []
oper = ''
for i in x:
    if isnum(i):
        num.append(int(i))
    elif isoper(i):
        oper = i

print(result())

