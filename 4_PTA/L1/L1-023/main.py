s=[]
s=input()
g=p=l=t=0
for i in s:
    if(i=='g'or i=='G'):
        g+=1
    if(i=='p'or i=='P'):
        p+=1
    if(i=='l'or i=='L'):
        l+=1
    if(i=='t'or i=='T'):
        t+=1

for i in range(10000):
    if(g==0 and p==0 and  l==0 and t==0):
        break
    if(g>0):
        print('G',end="")
        g-=1
    if(p>0):
        print('P',end="")
        p-=1
    if(l>0):
        print('L',end="")
        l-=1
    if(t>0):
        print('T',end="")
        t-=1
