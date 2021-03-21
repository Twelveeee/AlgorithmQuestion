import re

n=int(input())
a=[[0]*2 for i in range(n)]
for i in range(n):
    a[i][0],a[i][1]=map(str,input().split(','))
for i in range(n):
    #print(a[i][1][len(a[i][1])-4:-1],a[i][0][len(a[i][0])-3::])
    if(a[i][1][len(a[i][1])-4:-1]!='ong' or a[i][0][len(a[i][0])-3::]!='ong'):
        print('Skipped')
    else:
        print(a[i][0],end=",")
        c=[0]*len(a[i][1])
        c=str(a[i][1]).split(' ')
        for j in range(len(c)-3):
            print(c[j],end=" ")
        print('qiao ben zhong.')
