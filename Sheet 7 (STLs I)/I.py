tc = int(input())

for i in range(tc):
    n = int(input())
    arr = list(map(int, input().split()))
    
    used = set()
    cur_largest = n
    temp = []
    ans = []
    
    for i in range(n-1, -1, -1):
        temp.append(arr[i])
        used.add(arr[i])
        if arr[i] == cur_largest:
            while temp:
                ans.append(temp.pop())
            while cur_largest in used:
                cur_largest -= 1
    print(*ans)
