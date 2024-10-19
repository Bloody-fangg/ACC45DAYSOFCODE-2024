# cook your dish here
# cook your dish here
for i in range(int(input())):
    a,b=map(int,input().split())
    c=0
    for i in range(1,1000):
        if i%2==1:
            a=a-i
            if(a<0):
                print("Bob")
                break
        else:
            b=b-i
            if(b<0):
                print("Limak")
                break
            