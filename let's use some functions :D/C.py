n, x, a = map(int, input().split())

files_per_memory = a // x
memories_needed = (n + files_per_memory - 1) // files_per_memory

print(memories_needed)
