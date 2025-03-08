t = int(input())
for i in range(t):
    n = int(input())
    c = 0
    while True:
        if n % 2 == 0:
            n//=2
            c+=1
            
        elif n % 3 == 0:
            n//=3
            n*=2
            c+=1

        elif n % 5 == 0:
            n//=5
            n*=4
            c+=1

        elif n == 1:
            print(c)
            break
        else:
            print(-1)
            break


