n , h = input().split()
n = int(n) ; h = int(h)
a = input()
l = a.split()
ans= 0
for i in range(len(l)):
    l[i] = int(l[i])
    if l[i] > h:
        ans+=2
    else:
        ans+=1
print(ans)
