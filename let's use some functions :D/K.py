import math

R, X, Y = map(int, input().split())

D = math.sqrt(X**2 + Y**2)

if D % R == 0:
    steps = int(D // R)
elif D < R:
    steps = 2
else:
    steps = math.ceil(D / R)

print(steps)
