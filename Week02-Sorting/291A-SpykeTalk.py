def getNextGap(gap):
    gap = (gap * 10)//13
    if gap < 1:
        return 1
    return gap
 

def combSort(arr):
    n = len(arr)
    gap = n
    swapped = True
    while gap !=1 or swapped == 1:
        gap = getNextGap(gap)
        swapped = False
        for i in range(0, n-gap):
            if arr[i] > arr[i + gap]:
                arr[i], arr[i + gap]=arr[i + gap], arr[i]
                swapped = True
answer=0
possible=True
input()
arr = [int(x) for x in input().split()]
combSort(arr)
for i in range(0,len(arr)-2):
    if arr[i] == 0:
        continue
    if arr[i]==arr[i+1]:
        if arr[i]==arr[i+2]:
            possible=False
            break
        else:
            answer+=1
if arr[len(arr)-2] == arr[len(arr)-1] and len(arr) != 1  and arr[len(arr)-1] != 0:
    answer+=1
if possible==False:
    answer=-1
print (answer)
 
 