def can_produce(a, b, c):
    if a + b == c:
        return True
    if a - b == c or b - a == c:
        return True
    if a * b == c:
        return True
    if b != 0 and a % b == 0 and a // b == c:
        return True
    if a != 0 and b % a == 0 and b // a == c:
        return True
    return False

t = int(input().strip())
for _ in range(t):
    a, b, c = map(int, input().split())
    print("Possible" if can_produce(a, b, c) else "Impossible")
