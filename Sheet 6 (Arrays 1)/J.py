n = int(input())
a = input()
l = a.split()
maxi = -1
for i in range(len(l)):
    l[i] = int(l[i])
    maxi = max(maxi , l[i])
sm = 0
for i in range(len(l)):
    sm += maxi - l[i]
print(sm)
