n=int(input())
l=[]
for i in range(n):
    s,f=map(int,input().split())
    for i in range(s,f+1):
        if i not in l:
            l.append(i)
        else:
            continue
print(len(l))
