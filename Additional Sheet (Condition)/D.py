from math import floor,ceil
from itertools import permutations
a = list(map(int,input().split()))
target = sum(a)//2
combos = list(permutations(a,2))
for i in combos:
    if sum(i) == target:
        print('Yes')
        break
else:
    print('No')
