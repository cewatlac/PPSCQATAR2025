n , money = input().split()
n = int(n); money = int(money)
z3lan = 0
for i in range(n):
    s , nm = input().split()
    nm= int(nm)
    if s == '+':
        money+=nm
    else:
        if money >= nm:
            money-=nm
        else:
            z3lan+=1
print(money , z3lan)
            
