a1,b1=map(int,input().split())
n=int(input ())
aCount=bCount=0
for i in range(n):
    a2,a3,b2,b3=map(int,input().split())
    if(a3==a2+b2 and b3!=a2+b2):
        aCount+=1
    if(b3==a2+b2 and a3!=a2+b2):
        bCount+=1
    if(aCount==a1+1):
        print("A")
        print(bCount)
        break
    if(bCount==b1+1):
        print("B")
        print(aCount)
        break
exit(0)