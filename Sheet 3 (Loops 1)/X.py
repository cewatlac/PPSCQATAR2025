t = int(input())
for i in range(t):
    x, y = input().split()
    x= int(x); y= int(y)
    dl3 = max(2*min(x, y) , max(x , y))
    print(dl3*dl3)
