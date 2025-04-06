t = int(input())
while t > 0:
    t -= 1
    n = int(input())
    lst = list(map(int, input().split()))
    el = 0
    for i in range(n):
        if (lst.count(lst[i]) == 1):
            print(i + 1)
            break
