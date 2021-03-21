n = int(input())
h=[0 for i in range(n)]
w=[0 for i in range(n)]
for i in range(n):
    h[i],w[i]=map(int,input().split())

for i in range(n):
    bztz=(h[i]-100)*1.8
    if(abs(w[i]-bztz)<bztz*0.1):
        print('You are wan mei!')
    elif(abs(w[i]-bztz)>bztz*0.1 and w[i]-bztz>0):
         print('You are tai pang le!')
    else:
        print('You are tai shou le!')