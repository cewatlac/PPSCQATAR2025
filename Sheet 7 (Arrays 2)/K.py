
N = int(input())  
A = list(map(int, input().split()))  


total_nuts_taken = 0
for nuts in A:
    if nuts > 10:
        total_nuts_taken += nuts - 10


print(total_nuts_taken)
