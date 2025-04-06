n = int(input())
for _ in range(n):
    x1, y1, x2, y2 = map(int, input().split())
    x = abs(x2 - x1)
    y = abs(y2 - y1)
    print(x + y)
