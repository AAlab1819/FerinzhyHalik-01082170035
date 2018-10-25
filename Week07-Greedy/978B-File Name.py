length = int(input())
filename = input()
remove = 0
for i in range(length-2):
    if filename[i]+filename[i+1]+filename[i+2] == 'xxx':
        remove +=1
print(remove)


