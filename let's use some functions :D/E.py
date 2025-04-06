n,m = list(map(int,input().split()))
nums = list(map(int,input().split()))
if m > n:
    print(0)
else:
    nums.sort()
    print(sum(nums[:n-m]))
