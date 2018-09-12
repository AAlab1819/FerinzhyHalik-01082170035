def countingSort(arr, exp1):
 
    n = len(arr)
 
    
    output = [0] * (n)
 
    
    count = [0] * (10)
 
   
    for i in range(0, n):
        index = (arr[i]//exp1)
        count[ (index)%10 ] += 1
 
    
    for i in range(1,10):
        count[i] += count[i-1]
 
    
    i = n-1
    while i>=0:
        index = (arr[i]//exp1)
        output[ count[ (index)%10 ] - 1] = arr[i]
        count[ (index)%10 ] -= 1
        i -= 1
 
    
    i = 0
    for i in range(0,len(arr)):
        arr[i] = output[i]
 
def radixSort(arr):
 
    
    max1 = max(arr)
 

    exp = 1
    while max1//exp > 0:
        countingSort(arr,exp)
        exp *= 10

n = int(input())
arr = [int(x) for x in input().split()]
radixSort(arr)
unsupport = 0
for i in range(0,n):
    if arr[i]==arr[0]:
        unsupport+=1
    else:
        break
for i in range(n-1,0,-1):
    if arr[n-1] == arr[i]:
	    unsupport+=1
    else:
        break
answer = n - unsupport		
if answer < 0:
    print(0)
else:
    print(answer)