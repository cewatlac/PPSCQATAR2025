n = int(input())
total = 0
if n <= 50:
    total = n*0.5
elif n <= 150:
    total = 25 + ((n-50)*0.75)
elif n < 250:
    total = 25 + 75 + ((n-150)*1.2)
else:
    total = 25 + 75 + 120 + ((n-250)*1.5)
total *= 1.2
print(f"{total:.2f}")
