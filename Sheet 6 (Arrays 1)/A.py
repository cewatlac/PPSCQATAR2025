n , h = input().split()
n = int(n)
h = int(h)
a = input()
l = a.split()
mkn = 0
for i in range(len(l)):
    l[i] = int(l[i])
    if l[i] > h:
        mkn+=2
    else:
        mkn +=1
print(mkn)
