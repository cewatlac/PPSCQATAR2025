t = int(input())
while t > 0:
    t -= 1
    n, x = map(int, input().split())
    lst = list(map(int, input().split()))
    v = 0
    for i in range(1, 201):
        if(i in lst):
            v = i
        elif(i not in lst and x > 0):
            x -= 1
            v = i
        else:
            break
    print(v)
