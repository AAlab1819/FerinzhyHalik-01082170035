elements=int(input())
sequence=[int(x) for x in input().split()]
c=0
b=0
for x in range(elements):
	if sequence[x]>=0:
		b=b+sequence[x]
	else:
		c=c+sequence[x]
total=b-c
print(total)