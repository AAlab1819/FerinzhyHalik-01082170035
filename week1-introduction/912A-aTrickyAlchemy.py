'''
Yc  : Yellow Crystal
Bc  : Blue Crystal
yB  : Yellow Ball
gB  : Green Ball
bB  : Blue Ball
'''
Yc,Bc = map(int,input().split())
yB,gB,bB = map(int,input().split())

print(max((yB*2+gB)-Yc,0)+max((gB+bB*3)-Bc,0))
