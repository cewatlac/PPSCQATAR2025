n = int(input())
mi = 0 ; ch = 0
for i in range(n):
    m , c = input().split()
    m = int(m) ; c = int(c)
    if m > c:
        mi+=1
    if c > m:
        ch +=1
if mi > ch:
    print("Mishka")
elif ch > mi :
    print("Chris")
else:
    print("Friendship is magic!^^")
