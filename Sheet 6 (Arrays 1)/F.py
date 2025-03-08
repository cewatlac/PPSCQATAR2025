n = int(input())
a = input()
l = a.split()
mini_odd = 100000000000 ; sm = 0
for i in range(len(l)):
    l[i] = int(l[i])
    sm+=l[i]
    if l[i] % 2 != 0:
        mini_odd = min(mini_odd , l[i])
if sm %2 !=0:
    print(sm-mini_odd)
else:
    print(sm)
