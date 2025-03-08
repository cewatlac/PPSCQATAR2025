n = int(input())
solved = 0
for i in range(n):
    a , b , c = input().split()
    a = int(a) ; b= int(b) ; c = int(c)
    if a+b+c >= 2:
        solved+=1
print(solved)
