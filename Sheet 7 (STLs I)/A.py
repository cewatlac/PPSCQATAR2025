n = int(input())
nums = list(map(int, input().split()))

negatives = [x for x in nums if x < 0]
positives = [x for x in nums if x > 0]
zeros = [x for x in nums if x == 0]

set1 = [negatives.pop()]

if len(positives) > 0:
    set2 = [positives.pop()]
    if len(positives) > 0:
        set2.append(positives.pop())
    elif len(negatives) > 1:
        set2.append(negatives.pop())
else:
    set2 = [negatives.pop(), negatives.pop()]


set3 = negatives + positives + zeros


print(len(set1), *set1)
print(len(set2), *set2)
print(len(set3), *set3)
