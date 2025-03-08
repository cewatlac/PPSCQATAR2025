n, k, l, c, d, p, nl, np = map(int,input().split())
 
t1 = k * l
t2 = c * d 
 
nld = t1 // nl
ld = 0
sld = 0
 
if t2 >= nld:
    ld = nld
else:
    ld = t2
 
if p >= ld * np:
    sld = ld
else:
    sld = p // np
 
print(sld//n)
