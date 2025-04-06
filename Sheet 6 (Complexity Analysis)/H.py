def solve():
    n = input()
    for i in range(len(n) + 1):
        s = '0' * i + n
        if s == s[::-1]:
            print("Yes")
            return
    print("No")

solve()
