n = int(input())
a = [[int(i) for i in input().split()] for _ in range(n)]
ans = a[0][0] * a[0][1]
for left in range(n):
    for right in range(left, n):
        min_h = a[left][1]
        sum_w = 0
        for i in range(left, right + 1):
            min_h = min(min_h, a[i][1])
            sum_w += a[i][0]
        area = min_h * sum_w
        ans = max(ans, area)
print(ans)