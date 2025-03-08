n = int(input())
a = input()
l = a.split()
for i in range(len(l)):
    l[i] = int(l[i])
l.sort()
print(*l)
