total, team = map (int, input().split(" "))
intelligence = input().split(" ")
location = list(set(intelligence))
if len(location) < team:
    print("NO")
else:
    print ("YES")
    for i in range(team):
        print(intelligence.index(location[i]) + 1, end = " ")
