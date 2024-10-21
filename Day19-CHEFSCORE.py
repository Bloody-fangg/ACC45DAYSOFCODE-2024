# cook your dish here
# cook your dish here
for  _ in range(int(input())):
    N,X,Y=map(int,input().split(' '))
    
    SCORE=0
    i=1
    while i<=N:
        
        if X*i==Y:
            SCORE=Y 
    # TODO: write code...
        i+=1
    
    if SCORE==Y:
        print("YES")
        
    elif SCORE==0:
        print("NO")
        