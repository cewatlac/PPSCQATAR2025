n , r = input().split()
n= int(n); r = int(r)
if n >= 10:
    inner = r
else:
    inner = r + 100*(10-n)
print(inner)
