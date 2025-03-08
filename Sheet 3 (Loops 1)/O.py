n = int(input())
a = input()
l = a.split()

pol = 0
cre = 0
for i in range(len(l)):
    l[i] = int(l[i])
    if l[i] == -1:
        if pol > 0:
            pol-=1
        else:
            cre+=1
    else:
        pol += l[i]
print(cre)
