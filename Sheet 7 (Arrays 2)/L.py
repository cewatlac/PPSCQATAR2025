n = int(input())
ans = 0
ok = 0
pre = 0

for i in range(n):
    x = int(input())
    if (not ok):
        ok = 1
        pre = x
    else:
        ok = 0
        ans += x - pre

if (ok):
    print('still running')
else:
    print(ans)
