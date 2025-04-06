n = int(input())
l = list(map(int, input().split()))
x = int(input())
s = sum(l)
ff = x // s
suml = ff * s
count = ff * n

for i in l:
    suml += i
    count += 1
    if suml > x:
        break
print(count)
