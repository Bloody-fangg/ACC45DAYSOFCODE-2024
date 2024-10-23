# cook your dish here
# cook your dish here
T=int(input())
for i in range(T):
    H,X,Y=map(int,input().split())
    a=H-Y
    if(a%X==0):
        print((a//X)+1)
    else:
        print((a//X)+2)