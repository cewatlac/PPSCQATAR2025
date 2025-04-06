n = int(input())
a = list(map(int, input().split()))

max_len = 1
current_len = 1

for i in range(1, n):
    if a[i] >= a[i - 1]:
        current_len += 1
    else:
        max_len = max(max_len, current_len)
        current_len = 1

max_len = max(max_len, current_len)

print(max_len)
