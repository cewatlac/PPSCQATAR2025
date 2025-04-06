n = int(input())
nums = list(map(int,input().split()))
count = nums.count(1)
print(count)

cur_max = 1
steps = []
for v,i in enumerate(nums[1:]):
    if i == 1:
        steps.append(cur_max)
        cur_max = 1
    else:
        cur_max += 1

steps.append(nums[-1])
print(*steps)
