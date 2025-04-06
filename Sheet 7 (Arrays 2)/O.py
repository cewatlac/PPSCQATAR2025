n = int(input())
lst = list(map(int, input().split()))

k = -1
for i in range(n):
    for j in range(i + 1, n):
        if (lst[i] + lst[j]) in lst:
            k = lst.index(lst[i] + lst[j]) + 1
            print(k, i + 1, j + 1)
            break
    if (k != -1):
        break

if (k == -1):
    print(k)
