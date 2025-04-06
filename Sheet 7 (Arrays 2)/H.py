k = int(input())
lst = list(map(int, input().split()))
lst.sort()
lst.reverse()
sum, i = 0, 0
while i < len(lst) and sum < k:
    sum += lst[i]
    i += 1
if sum < k:
    i = -1
print(i)
