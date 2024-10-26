# cook your dish here
# cook your dish here
for i in range(int(input())):
    n=int(input())
    c=0
    if n==1:
        print(0)
    else:
        for j in range(2,n+1,7):
            c=c+1
        print(c)