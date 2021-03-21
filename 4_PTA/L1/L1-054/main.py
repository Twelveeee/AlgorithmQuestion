zf,n=map(str,input().split())
a=[]
asd=0
if(n==1):
    print('bu yong dao le')
    print(a.replace('@',zf))
    exit(0)
for i in range(int(n)):
    a.append(str(input()))
for i in range(int(n)):
    if(a[i]!=a[int(n)-1-i]):
        asd=1
if(asd==0):
    print('bu yong dao le')
for i in range(int(n)-1,-1,-1):
   a[i]=a[i].replace('@',zf)
   print(a[i][::-1])