
# cook your dish here
for i in range(int(input())):
    n,x,y=map(int,input().split())
    print((2*(n-1))+min(x-1,y-1)+min(x-1,n-y)+min(n-x,y-1)+min(n-x,n-y))