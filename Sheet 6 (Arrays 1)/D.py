t = 1
while True:
    n = int(input())
    if n == 0:
        break
    a = input()
    l = a.split()
    sm = 0
    for i in range(len(l)):
        l[i]= int(l[i])
        sm+= l[i]
    col = int (sm / n)
    ans = 0
    for i in range(len(l)):
        if l[i] > col:
           ans+= l[i] -col
    print("Set #" , t , sep = "")
    print("The minimum number of moves is " , ans , "." , sep ="")
    print()
    t+=1
