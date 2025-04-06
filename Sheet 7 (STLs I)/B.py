from collections import deque
n,m = list(map(int,input().split()))
l = deque(map(int,input().split()))
l.rotate(n-m)
print(*l)
