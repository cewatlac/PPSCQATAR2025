n = int(input())
a = input()
l1 = a.split()
b = input()
l2 = b.split()
lev = [0]*(n+1)
ck = True
for i in range(1, len(l1)):
    l1[i] = int(l1[i])
    lev[l1[i]] = 1
for i in range(1, len(l2)):
    l2[i] = int(l2[i])
    lev[l2[i]] = 1
for i in range(1 , n+1):
    if lev[i] == 0:
        ck = False
        break
if ck:
    print("I become the guy.")
else:
    print("Oh, my keyboard!")
