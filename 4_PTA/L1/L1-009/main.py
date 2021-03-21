from fractions import Fraction

N=int(input())
list=[]
list= (input().split())
sum = 0
for i in range(N):
    sum = Fraction(sum)+ Fraction(list[i])
if(int(sum)==sum):
    print(int(sum))
elif(int(sum)!=sum):
    s=sum-int(sum)
    if(int(sum)!=0):
     print(int(sum),s)
    if(int(sum)==0):
     print(s)