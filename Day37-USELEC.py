# cook your dish here
import math

tc = int(input())
for _ in range(tc):
    ctwin = 0
    d = []
    n, x = map(int, input().strip().split())
    a = list(map(int, input().strip().split()))
    b = list(map(int, input().strip().split()))
    
    win = math.ceil(n / 2)
    break_outer = False
    
    for i in range(n):
        if a[i] > b[i]:
            ctwin += 1
            if ctwin >= win:
                print('YES')
                break_outer = True
                break
        else:
            d.append(b[i] - a[i] + 1)
    
    if not break_outer:
        d.sort()
        
        for i in d:
            if i <= x:
                x -= i
                ctwin += 1
            if ctwin >= win:
                print('YES')
                break_outer = True
                break
        
        if not break_outer:
            print('NO')


        
    
        
    
        
    
    
    