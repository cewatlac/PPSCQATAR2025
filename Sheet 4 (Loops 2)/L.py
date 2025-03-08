a , b =input().split()
a = int(a) ; b = int(b)
pal = 0
for i in range(a , b+1):
    str_i = str(i)
    if str_i == str_i[::-1]:
        pal+=1
print(pal)
