# cook your dish here
# cook your dish here
for _ in range(int(input())):
    n = int(input())
    p = list(map(int,input().split()))
    groups = set(p)
    for g in groups:
        if p.count(g) % g != 0:
            print('NO')
            break
    else:
        print('YES')