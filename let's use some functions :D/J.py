def next_letter(c):
    letters = list("abcdefghijklmnopqrstuvwxyz")
    return letters[letters.index(c) + 1]

c = input().strip()
print(next_letter(c))
