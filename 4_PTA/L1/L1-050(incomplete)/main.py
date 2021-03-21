l,n=map(int,input().split())
array=[]
ll=26**l
j=0
x=ll-n
for i in range(l-1,0,-1):
    array[j]=x/(26**i)+int('a')
    x=x%(26**i)
    j+=1
for i in range(l):
    print(a[i])