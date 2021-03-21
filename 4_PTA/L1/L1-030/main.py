n=int(input())
if(n < 0 or n > 50):
    exit(0)
name=[0]*n
sex=[0]*n
arr=[0]*n
for i in range(n):
    sex[i],name[i]=map(str,input().split())
for i in range(n):
    for j in range(n-1,0,-1):
        if(arr[i]==0 and arr[j]==0 and sex[i]!=sex[j]):
            print(name[i],name[j])
            arr[i]=1
            arr[j]=1