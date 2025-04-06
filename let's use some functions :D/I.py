N = input().strip()

for i in range(len(N) + 1):
    padded_N = '0' * i + N  
    if padded_N == padded_N[::-1]:  
        print("Yes")
        break
else:
    print("No")
