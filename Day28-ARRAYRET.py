# cook your dish here
# cook your dish here
t = int(input())

for _ in range(t):
    n = int(input())
    b = list(map(int, input().split()))
    sum_b = sum(b)
    sum_a = sum_b // (n + 1)
    a = [b[i] - sum_a for i in range(n)]
    print(*a)