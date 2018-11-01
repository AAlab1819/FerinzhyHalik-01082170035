types,volume=map(int,input().split())
cost,payment=0,10**18
a=list(map(int,input().split()))
for i in range(len(a)-1):
    a[i+1]=min(a[i+1],a[i]*2)
for i in range(types-1,-1,-1):
    d=1<<i
    cost+=a[i]*(volume//d)
    volume%=d
    payment=min(payment,cost+(volume!=0)*a[i])
print(payment)