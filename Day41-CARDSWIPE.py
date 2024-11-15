for i in range(int(input())):
    n = int(input())
    a = list(map(int,input().split()))
    b = set()
    m = 0
    for i in range(len(a)):
        if a[i] not in b:
            b.add(a[i])
        else:
            b.remove(a[i])
        m = max(m , len(b))
    print(m)