# cook your dish here
for i in range(int(input())):
    a=int(input())
    s=input()
    c=s.count('1')
    if(c%2==0):
        print("YES")
    else:
        print("NO")