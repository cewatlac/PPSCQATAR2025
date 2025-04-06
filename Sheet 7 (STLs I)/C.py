n = int(input())
nums = list(map(int,input().split()))

ones = 0
twos = 0
threes = 0

index_1 = []
index_2 = []
index_3 = []

for v,i in enumerate(nums):
    if i == 1:
        ones +=1
        index_1.append(v+1)
    elif i == 2:
        twos +=1
        index_2.append(v+1)
    else:
        threes +=1
        index_3.append(v+1)

print(min(ones, twos, threes))
for i in range(min(ones, twos, threes)):
    print(index_1[i], index_2[i], index_3[i])
