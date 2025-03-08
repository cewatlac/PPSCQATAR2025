n , k = input().split()
n = int(n); k = int(k)
for i in range(k):
    if n%10 == 0:
        n/=10

    else:
        n-=1
    n = int(n)
print(n)
