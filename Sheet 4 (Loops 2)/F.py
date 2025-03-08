n = int(input())
while True:
    var = str ( n)
    sm =0
    for i in range(len(var)):
        sm += int(var[i])
    if  sm % 4 == 0:
        print(var)
        exit()
    n+=1
