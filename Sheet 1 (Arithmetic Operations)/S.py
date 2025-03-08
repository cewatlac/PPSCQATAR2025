l , r , d = input().split()
l = int(l)
r = int(r)
d = int(d)
l -= 1
l /= d; l = int(l)
r/=d  ; r= int(r)
print(r-l)
