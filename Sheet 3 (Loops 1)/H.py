n = int(input())
ans = 0
for i in range(n):
    a , b = input().split()
    a = int(a)
    b = int(b)
    if a + 2 <= b:
        ans+=1
print(ans)

