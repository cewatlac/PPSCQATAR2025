a , b = input().split()
a = int(a) ; b = int(b)
if a % 3 == 0 or b % 3 == 0 or (a+b) % 3 == 0 :
    print("Possible")
else :
    print("Impossible")
