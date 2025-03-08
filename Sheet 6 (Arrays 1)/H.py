n, k = map(int,input().split())  
st = set()  
for i in range(n):  
    l, r = map(int,input().split())  
    for j in range(l,r+1):  
        st.add(j)  

lst = []  
for i in range(1,k+1):  
    if i not in st:  
        lst.append(i)  

print(len(lst))  
for i in lst:  
    print(i, end=' ')  
