x , y , z = input().split()
x=  int(x) ; y = int(y) ; z = int(z)
a = x + y
b = x + z
c = y + z
if a < b and a < c:
    print(a)
elif b <a and b < c:
    print(b)
else:
    print(c)
