x, y = map(int,input().split())
t = 0

if x < 4:
    t += 300000 - (x-1)*100000

if y < 4:
    t += 300000 - (y-1)*100000

if x == 1 and y == 1:
    t += 400000

print(t)
