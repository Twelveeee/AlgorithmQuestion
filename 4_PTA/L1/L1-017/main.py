N=[]
N=str(input())
M=float(1)
count=0
if(int(N)<0):
    M=M*1.5
    N=N[1:len(N)]
if(int(N)%2==0):
    M=M*2
for i in range(len(N)):
    if(int(N[i])==2):count+=1
M=M*count/len(N)
print('%.2f%%'%(M*100))
