t = int(input())  

for _ in range(t):
    n = int(input()) 
    a = list(map(int, input().split())) 
    
 
    even_at_odd = 0  
    odd_at_even = 0 
    
   
    for i in range(n):
        if i % 2 == 0:  
            if a[i] % 2 != 0:  
                odd_at_even += 1
        else:  
            if a[i] % 2 == 0: 
                even_at_odd += 1
    
   
    if even_at_odd == odd_at_even:
        print(even_at_odd)
    else:
        print(-1)
