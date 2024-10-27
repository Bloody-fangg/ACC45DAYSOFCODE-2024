# cook your dish here
# cook your dish here
t=int(input())
for t in range(t):
    a,b,c,d=map(int,input().split())
    print(max((a+c),(a+d),(b+c),(b+d)))