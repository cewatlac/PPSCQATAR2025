n , b, d = input().split()
n = int(n) ; b = int(b) ;  d = int(d)
a = input()
l = a.split()
temp = d
ans = 0
for i in range(len(l)):
    l[i] = int(l[i])
    if l[i] > b:
        continue
    if l[i] <= temp:
        temp -= l[i]
    else:
        ans+=1
        temp = d
print(ans)
