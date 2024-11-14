# cook your dish here
for _ in range(int(input())):
    n,x,p=map(int,input().split())
    h=x*3
    k=n-x
    g=h-k
    if g>=p:
        print('PASS')
    else :
        print('FAIL')