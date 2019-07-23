a,b=map(int,input().split())
c=b-a
sum=0
for i in range(c+1):
    d = a+i
    sum+=d
    print("{:>5}".format(d),end="")
    if(i!=0 and (i+1)%5==0):
        print()
    if(i==c):
        print()
print('Sum =',sum)