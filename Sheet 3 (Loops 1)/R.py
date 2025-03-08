t = int(input())
for i in range(t):
    a , b, c , n = input().split()
    a = int(a); b = int(b) ; c = int(c) ; n =int(n)
    maxi =max(max(a,b) , c)
    sm = 0
    sm += maxi - a
    sm += maxi - b
    sm += maxi - c
    n -= sm
    if n % 3 == 0 and n >= 0 :
        print("YES")
    else:
        print("NO")
    
