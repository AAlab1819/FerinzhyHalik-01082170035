sessions = int(input())
teams = [int(x) for x in input().split()]
for i in range(len(teams)):
    if teams[i]%2 == 0 and teams[i] > 0:
        teams[i] = 2
    if teams[i]%2 == 1:
        teams[i] = 1
possible = True
for i in range(len(teams)):
    if teams[i] == 1:
        if i + 1 < len(teams) and teams[i + 1] > 0:
            teams[i] = 0
            teams[i + 1] -= 1
for i in range(len(teams)):
    if teams[i] == 1:
        possible = False
if possible:
    print("YES")
else:
    print("NO")