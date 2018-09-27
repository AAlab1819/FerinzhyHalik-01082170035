# Buttons (268B)
\
A single line contains integer buttons (how many buttons it have)\
\
```buttons = int(input())```\
\
I assign push = buttons(input).\
\
```push = buttons```\
\
Then for loop 1 to buttons (how many time pushed).\
\
```for i in range(1,buttons):```\
\
the formula to solve the problem (the worst case scenario).\
\
```push += i*(buttons-i)```\
After the for loop is done, print the answer (push)\
\
```print(push)```
\
Complexity: O(n)

# Igor In the Museum (598D)

Igor is in the museum and he wants to see as many pictures as possible.\
\
First line of the input contains three integers n, m and k respectively are the museum dimension and the starting position.\

\
Each of the next n lines contains m symbols '.', '*'.\
'.'  means an empty cell
'*' means an impassable wall/ border
\
\

**The solution** is to detect all the impssable walls that are near the spot he's standing (the inputted 'k') using flood fill and count all the '.' near him

The complexity is O(nm)
