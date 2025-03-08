n = int(input())
stage = 0
tot = 0
it = 1
while True:
    stage += it
    tot+=stage
    if tot > n :
        break
    it+=1
print(it-1)
