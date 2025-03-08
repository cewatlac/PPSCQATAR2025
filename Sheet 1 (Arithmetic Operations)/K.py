x = input()
a = input()
b = input()
x = int(x) ; a = int(a) ; b= int(b)
x -= a # x = x - a
c = int(x / b)
x -= c * b # x = x - (c*b)
print(x)
