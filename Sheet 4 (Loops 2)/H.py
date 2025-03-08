n , k = input().split()
n = int(n); k = int(k)
ans = ""
j = 0
first_char = ord('a')
for i in range(n):
    ans += chr(first_char+j)
    j+=1
    if j == k:
        j = 0
print(ans)
