n , k = input().split()
n = int(n) ; k = int(k)
a = input()
l = a.split()
c = 0 
l[k-1] = int(l[k-1])
for i in range(len(l)):
    l[i] = int(l[i])
    if l[i] >= l[k-1] and l[i] > 0:
        c+=1
print(c)
