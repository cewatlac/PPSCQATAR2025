t = int(input())

while t > 0:
    t -= 1
    n, k = map(int, input().split())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))

    a.sort()
    b.sort(reverse=True)

    for i in range(n):
        if k > 0 and a[i] < b[i]:
            a[i], b[i] = b[i], a[i]
            k -= 1

    print(sum(a))
