# cook your dish here
# cook your dish here
t=int(input())
while t>0:
    a,b,c,d=map(int,input().split())
    if(a==b==c==d==0):
        print("In")
    else:
        print("Out")
    t-=1