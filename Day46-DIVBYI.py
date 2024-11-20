for _ in range(int(input())):
    a = int(input())
    l = []
    c = 0
    for i in range(0,a):
        if i%2==0:
            l.append(a-c)
            c+=1
        else:
            l.append(c)
    l.reverse()
    print(*l)