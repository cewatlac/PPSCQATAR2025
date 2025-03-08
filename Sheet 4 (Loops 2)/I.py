a = input()
l = a.split()
ans = []
for i in range(len(l)):
    if l[i] not in ans:
        ans.append(l[i])
print(4 - len(ans))
