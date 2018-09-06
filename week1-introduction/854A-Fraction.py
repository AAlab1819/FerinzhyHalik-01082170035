n = int(input())
if n % 2 == 1:
    num = n//2
    den = n - num
else:
    num = (n//2) - 1
    while num % 2 == 0:
        num -= 1
    den = n - num
print(num, den)
