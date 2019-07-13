n = int(input())
a = []
for i in range(n):
    s = input()
    a.append(s)


x = 0

for i in range(n):
    if "+" in a[i]:
        x+=1
    elif "-" in a[i]:
        x -= 1

print(x)
