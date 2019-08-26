n=int(input())
a=[[0]*2 for i in range(n)] 
sum=0
for i in range(n):
    a[i][0],a[i][1]=map(str,input().split())
    sum+=int(a[i][1])
ave=int((sum/n)/2)
for i in range(n-1):
    for j in range(n-1-i):
        if (abs(int(a[j][1])-ave)>=abs(int(a[j+1][1])-ave)):
           a[j],a[j+1]=a[j+1],a[j]
print(ave,a[0][0])