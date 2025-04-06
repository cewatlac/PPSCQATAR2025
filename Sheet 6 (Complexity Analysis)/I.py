t = int(input())
l=[]
for _ in range(t):
    n, d = map(int, input().split())
    a = list(map(int, input().split()))
    a.sort()
    
    if a[-1] <= d:
        l.append("YES")
    elif a[0] + a[1] <= d:
        l.append("YES")
    else:
        l.append("NO")
for i in l:
    print(i)
