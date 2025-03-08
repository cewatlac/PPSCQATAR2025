n , m = input().split()
n = int(n) ; m = int(m)
a = input()
l = a.split()
for i in range(len(l)):
    l[i]= int(l[i])
l.sort()
mini =10123123123
for i in range(len(l) - n + 1):
    mini = min(mini , l[i+n-1] - l[i])
print(mini)
