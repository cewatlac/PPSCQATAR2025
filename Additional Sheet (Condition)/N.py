l1, r1, l2, r2, k = map(int, input().split())

start = max(l1, l2)
end = min(r1, r2)

result = 0
if start <= end:
    result = end - start + 1
    if start <= k <= end:
        result -= 1

print(result)
