k , s = input().split()
k = int(k) ; s =int(s)
ans = 0
for x in range(k+1):
    for y in range(k+1):
        z = s - (x+y)
        if z <= k and z >= 0:
            #print(x , y ,z)
            ans+=1
print(ans)
