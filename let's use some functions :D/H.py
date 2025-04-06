def find_dimensions(n):
    for height in range(1, n + 1):
        if n % height == 0:
            width = n // height
            return height, width

n = int(input())
height, width = find_dimensions(n)
print(height, width)
