
def ap(a,n):
    return (a*(n*(n+1))//2)


t = int(input())
sum = []
for i in  range(t):
    sum.append(0)
    n = int(input())
    sum[i] = ap(3,(n-1)//3) + ap(5,(n-1)//5) - ap(15,(n-1)//15)


for i in range(t):
    print(sum[i])
