n = int(input())
a = input()
one = 0 ; ze = 0
for i in range(len(a)):
    if a[i] =='1':
        one+=1
    else:
        ze+=1
print(abs(one - ze))
