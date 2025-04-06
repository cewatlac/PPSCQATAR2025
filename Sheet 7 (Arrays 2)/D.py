t = int(input())

for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))

    has_odd = any(x % 2 != 0 for x in a)
    has_even = any(x % 2 == 0 for x in a)

    if has_odd and has_even:
        print("YES")
    elif has_odd:
        if n % 2 == 1:
            print("YES")
        else:
            print("NO")
    else:
        print("NO")
