def shellSort(arr):
    n = len(arr)
    gap = n//2
    while gap > 0:
        for i in range(gap,n):
            temp = arr[i]
            j = i
            while  j >= gap and arr[j-gap] >temp:
                arr[j] = arr[j-gap]
                j -= gap
            arr[j] = temp
        gap //= 2
kirito, enemies = map(int, input().split())
dragons = []
possible = True
for dragon in range(enemies):
    strength, bonus = map(int, input().split())
    dragons.append([strength, bonus])
shellSort(dragons)
for dragon in dragons:
    if dragon[0] >= kirito:
        possible = False
    else:
        kirito += dragon[1]
if possible == True:
    print("YES")
else:
    print("NO")