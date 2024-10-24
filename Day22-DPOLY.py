# cook your dish here
# cook your dish here
t=int(input())
while t>0:
    n=int(input())
    a=list(map(int,input().split()))
    ct=0
    for i in range(n):
        if a[i]!=0 and i>ct:
            ct=i
    print(ct)
    t-=1
                