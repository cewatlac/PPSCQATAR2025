n = int(input())
directions = input().strip()
positions = list(map(int, input().split()))

time = float('inf')


for i in range(n - 1):
    if directions[i] == 'R' and directions[i + 1] == 'L':
        
        collision_time = (positions[i + 1] - positions[i]) // 2
        time = min(time, collision_time)

print(time if time != float('inf') else -1)
