for i in range(int(input())):
    n = int(input())  
    a = list(map(int, input().split()))  
    
    ans = [0] * n  
    
    for i in range(n, 0, -1):  
        ind = 0
        
        for j in range(i):
            if a[j] == i:
                ind = j
        
        b = [0] * i  
        
        for j in range(i):
            b[(i - ind + j-1) % i] = a[j]
        
        for j in range(i):
            a[j] = b[j]
                
        if i != 1:
            ans[i - 1] = (ind + 1) % i
        else:
            ans[i-1] = 0
    
    print(" ".join(map(str, ans)))  
