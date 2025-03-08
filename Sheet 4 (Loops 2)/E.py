L = []
for i in range(5):
    a = input()
    ls = a.split()
    L.append(ls)
x = 0 ; y = 0
for i in range(len(L)):
    for j in range(len(L)):
        if L[i][j] == '1':
            x = i ; y = j
print(abs(2-x) + abs(2-y))
