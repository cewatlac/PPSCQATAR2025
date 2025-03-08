n = int(input())
a = input()
ant = 0 ; dan = 0
for i in range(len(a)):
    if a[i] == 'A':
       ant+=1
    else:
        dan+=1
if ant > dan :
    print("Anton")
elif dan > ant :
    print("Danik")
else:
    print("Friendship")
