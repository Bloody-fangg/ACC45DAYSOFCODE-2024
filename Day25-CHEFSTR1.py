# cook your dish here
# cook your dish here
t = int(input())
for _ in range(t):
    n = int(input())
    l = list(map(int, input().split()))
    skip = 0
    for i in range(1,n):
        skip = skip + abs(l[i]-l[i-1]) - 1
    print(skip)