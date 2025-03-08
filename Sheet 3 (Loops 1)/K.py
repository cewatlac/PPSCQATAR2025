a = input()
c = 0
for i in range(len(a)):
    if a[i] == '4' or a[i] == '7':
        c+=1
if c == 4 or c == 7:
    print("YES")
else:
    print("NO")
