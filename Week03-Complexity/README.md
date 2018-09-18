# Vanya and Lanterns (492B).\
\
The first line contains 2 integers (number of lanterns, length of street respectively)\
```lanterns, maxStreet = map(int, input().split())```\
\
Next line contains integer depends on the number of lanterns inputted above.\
```lanternPositions = sorted([int(x) for x in input().split()])```\
the list above is already sorted using the sort code that provided in python.\
\
Next find the highest radius out of the lanterns.\
```for i in range (lanterns-1):```\
 ```distance = lanternPositions[i+1] - lanternPositions[i]```\
 ```if maxDistance < distance:```\
     ```maxDistance = distance```\
```answer = maxDistance/2```\

some error handling used **if** the starting point have no lantern(s).\
```if 0 not in lanternPositions:```\
    ```if answer < lanternPositions[0]:```\
        ```answer = lanternPositions[0]```\
```if maxStreet not in lanternPositions:```\
    ```if answer < maxStreet - lanternPositions[lanterns-1]:```\
        ```answer = maxStreet - lanternPositions[lanterns-1]```\
        \
Finally just print (d).\
```print(answer)```

Worst Case (TimSort) : O(n log n)\
Average Case (TimSort) : θ(n log n)\
Best Case (TimSort) : Ω(n)



# Insomnia Cure (148A).
\
Input data contains integer numbers k(got punched in the face using frying pan), l(dragon got his tail shut into the balcony door), m(dragon got his paws trampled with sharp heels), n(threaten the dragon to call her mom) and total of dragon, each number in a separate line\
```k=int (input())```
```l=int (input())```
```m=int (input())```
```n=int (input())```
```dragons=int (input())```\
We need to output the number of the damaged dragon.\
First, I declare a variable of the damaged dragon.\
```damagedDragons = 0```\
Second, I make a loop\
```for i in range (1, d+1):```\
If ```i``` divisible by ```k or l or m or n```\
```if i%k == 0 or i%l == 0 or i%m == 0 or i%n == 0:```\
Increment the damaged dragons\
```damagedDragons = damagedDragons+ 1```\
Then print the damaged dragons\
```print(damaged_dragons)```

Worst Case: O(n)\
Average Case: θ(n)\
Best Case: Ω(n)\

# I Wanna Be the Guy (469A).
\
