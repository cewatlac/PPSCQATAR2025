
x = list(map(int, input().split()))


total_sum = max(x)


x.remove(total_sum)  
a = total_sum - x[0]
b = total_sum - x[1]
c = total_sum - x[2]


print(a, b, c)
