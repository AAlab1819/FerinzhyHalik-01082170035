n = int(input())
if n % 2 == 1:
    pembilang = n//2
    penyebut = n - pembilang
else:
    pembilang = (n//2) - 1
    while pembilang % 2 == 0:
        pembilang -= 1
    penyebut = n - pembilang
print(pembilang, penyebut)
