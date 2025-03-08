from fractions import Fraction
x,y = list(map(int,input().split()))
if Fraction(6-max(x,y) + 1,6) == 1:
    print('1/1')
else:
    print(Fraction(6-max(x,y) + 1,6))
