
stones=int(input())
stoneArray=list(map(int,input().split()))
question=int(input())
b=sorted(stoneArray)
for i in range(stones-1):
	stoneArray[i+1]+=stoneArray[i]
	b[i+1]+=b[i]
stoneArray,b=[0]+stoneArray,[0]+b
for i in range(question):
	qt,l,r=map(int,input().split())
	print(b[r]-b[l-1] if qt==2 else stoneArray[r]-stoneArray[l-1])