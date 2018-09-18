lanterns, maxStreet = map(int, input().split())
lanternPositions = sorted([int(x) for x in input().split()])
maxDistance=0
for i in range (lanterns-1):
    distance = lanternPositions[i+1] - lanternPositions[i]
    if maxDistance < distance:
        maxDistance = distance
answer = maxDistance/2
if 0 not in lanternPositions:
    if answer < lanternPositions[0]:
        answer = lanternPositions[0]
if maxStreet not in lanternPositions:
    if answer < maxStreet - lanternPositions[lanterns-1]:
        answer = maxStreet - lanternPositions[lanterns-1]
print(answer)