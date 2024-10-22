# cook your dish here
# cook your dish here
t=int(input())
for i in range(t):
    x,y=map(int,input().split())
    a=x*100//10
    b=y*100//20 
    if(a==b):
        print("any")
    elif(a>b):
        print("first")
    else:
        print("Second")