n = int(input())
smx = 0 ; smy = 0 ; smz = 0
for i in range(n):
    x , y , z = input().split()
    x = int(x) ; y = int(y) ; z = int(z)
    smx+=x ; smy += y; smz += z
if smx == 0 and smy == 0 and smz == 0:
    print("YES")
else:
    print("NO")
