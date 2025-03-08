import math
h = int(input())
w =int(input())
n = int(input())
maxi = 0
if h > w:
    maxi = h
else:
    maxi = w
print(math.ceil(n/maxi) )
