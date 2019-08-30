n=int(input())
a=[0]*n
for i in range(n):
    a[i]=str(input())
for i in range(n):
    if(int(a[i][0])+int(a[i][1])+int(a[i][2])==int(a[i][3])+int(a[i][4])+int(a[i][5])):
       print('You are lucky!')
    else:
       print('Wish you good luck.')
