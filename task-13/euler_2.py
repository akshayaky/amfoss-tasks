
t = int(input())
sum = []
fib = [1,2]
x= 2
while fib[x-1] + fib[x-2]<4*(10)**16 :
    fib.append(fib[x-1] + fib[x-2])
    x += 1



for i in range(t):
    sum.append(0)
    n = int(input())
    y = 1
    while fib[y]<n:
            sum[i] += fib[y]
            y += 3 #even number after every two odd numbers
            if y >= len(fib):
                break

for i in range(t):
    print(sum[i])


