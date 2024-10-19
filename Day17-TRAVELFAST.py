# cook your dish here
n=int(input())
for i in range(n):
    c=list(map(int,input().split()))
    if c[0]>c[1]:
        print("CAR")
    elif c[1]>c[0]:
        print("BIKE")
    else:
        print("SAME")