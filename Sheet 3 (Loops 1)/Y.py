n = int(input())
a = input()
c = 0 ; maxi = 0
for i in range(len(a)):
    if a[i] == 'I':
        c+=1
    else:
        c-=1
    maxi = max(maxi , c)
print(maxi)
