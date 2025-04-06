n=int(input())
x=int(input())
top=x
bottom=7-top
sides=[tuple(map(int,input().split())) for _ in range(n)]
for a,b in sides:
    if a==top or a==bottom or b==top or b==bottom:
        print("NO")
        break
else:
    print("YES")
