x,y = list(map(int,input().split()))
if x == y:
    print('Draw')
elif x == 1:
    print('Alice')
elif y == 1:
    print('Bob')
elif x > y and y != 1:
    print('Alice')
elif x < y and x != 1:
    print('Bob')
