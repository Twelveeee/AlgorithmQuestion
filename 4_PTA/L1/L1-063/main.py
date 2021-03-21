n=int(input())
sex=[0]*n
h=[0]*n
w=[0]*n
for i in range(n):
    sex[i],h[i],w[i]=map(int,input().split())
for i in range(n):
    if sex[i]==1:
        if(h[i]<130):
            print('duo chi yu!',end=" ")
        elif(h[i]==130):
            print('wan mei!',end=" ")
        else:
            print('ni li hai!',end=" ")
        if(w[i]<27):
            print('duo chi rou!')
        elif(w[i]==27):
            print('wan mei!')
        else:
            print('shao chi rou!')

    if sex[i]==0:
        if(h[i]<129):
            print('duo chi yu!',end=" ")
        elif(h[i]==129):
            print('wan mei!',end=" ")
        else:
            print('ni li hai!',end=" ")
        if(w[i]<25):
            print('duo chi rou!')
        elif(w[i]==25):
            print('wan mei!')
        else:
            print('shao chi rou!')