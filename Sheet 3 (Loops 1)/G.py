a , b = input().split()
a = int(a) ; b= int(b)
year= 0
while a <= b:
    a*=3
    b*=2
    year+=1
print(year)
