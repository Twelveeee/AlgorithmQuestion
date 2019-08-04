n=int(input())
sex=[0]*n
h=[0]*n
for i in range(n):
    sex[i],h[i]=map(str,input().split())
for i in range(n):
    if(sex[i]=='M'):
        print('%.2f'%(float(h[i])/1.09))
    if(sex[i]=='F'):
        print('%.2f'%(float(h[i])*1.09))