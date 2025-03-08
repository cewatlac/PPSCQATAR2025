n = int(input())
a = input()
ans = 1
for i in range(n-1):
    b = input()
    if a != b:
       ans += 1
    a = b
print(ans)
