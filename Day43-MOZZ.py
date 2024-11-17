for i in range(int(input())):
    x , y , r = map(int,input().split())
    a = r // 30
    x = x + a
    if x % y == 0:
        print(x // y)
    else:
        print((x // y) + 1)