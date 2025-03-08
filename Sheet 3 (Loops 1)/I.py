k , n , w = input().split()
k = int(k); n = int(n); w = int(w)
sm = 0
for i in range(1 , w+1):
    sm += i * k
if sm > n:
    print(sm - n)
else:
    print(0)
