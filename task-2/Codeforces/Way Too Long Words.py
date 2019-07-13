n = int(input())

a = []
for i in range(n):
    s = input()
    a.append(s)


for i in range(n):
    k = a[i]
    if len(k)>10:
        k = k[0] + str(len(k)-2) + k[-1]
        a[i] = k
    print(a[i])

