def maxsum(a,b,c):
    x,y,z=a+b,a+c,b+c
    t=[x,y,z]
    print(max(t))
l,m,n=map(int,input().split())
maxsum(l,m,n)
