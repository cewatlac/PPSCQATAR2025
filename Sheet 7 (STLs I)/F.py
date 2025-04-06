n, m = map(int, input().split())  
a = list(map(int, input().split()))  


queue = [(i + 1, a[i]) for i in range(n)]  
while len(queue) > 1:
   
    child, needed_candies = queue.pop(0)
    
  
    needed_candies -= m
    
    if needed_candies > 0:
       
        queue.append((child, needed_candies))
    

print(queue[0][0])
  
