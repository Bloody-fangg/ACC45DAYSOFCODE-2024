# cook your dish here
t = int(input())
for i in range(0,t):
    N = int(input())
    L = list(map(int,input().split()))
    G = list(map(int,input().split()))
    count=0
    cou=0
    co = 0
    coun = 0
    for j in range(N):
        if(L[j] <= G[j]):
            count += 1
    if(count == N):
        coun = 1
    M = G[::-1]
    for j in range(N):
        if(L[j] <= M[j]):
            cou += 1
    if(cou == N):
        co = 1
    if(coun == 1 and co == 1):
        print("both")
    elif(coun == 1):
        print("front")
    elif(co == 1):
        print("back")
    else:
        print("none")
        