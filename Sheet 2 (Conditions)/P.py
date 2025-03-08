k = int(input())
a , b = input().split()
a = int(a) ; b = int(b)
t1 = a//k  ; t2 = b//k
if a % k == 0 or b % k == 0 or t1!=t2:
    print("OK")
else :
    print("NG")
