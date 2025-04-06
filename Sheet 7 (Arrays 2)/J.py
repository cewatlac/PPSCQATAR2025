presses = []
for _ in range(3):
    row = list(map(int, input().split()))
    presses.append(row)


lights = []
for _ in range(3):
    lights.append([1, 1, 1]) 

lights = []
for _ in range(3):
    row = [1, 1, 1] 
    lights.append(row)


for i in range(3):
    for j in range(3):
        if presses[i][j] % 2 == 1:  
          
            lights[i][j] = 1 - lights[i][j]
        
            if i > 0:  
                lights[i-1][j] = 1 - lights[i-1][j]
            if i < 2:  
                lights[i+1][j] = 1 - lights[i+1][j]
            if j > 0: 
                lights[i][j-1] = 1 - lights[i][j-1]
            if j < 2:  
                lights[i][j+1] = 1 - lights[i][j+1]


for row in lights:
    print("".join(map(str, row)))
