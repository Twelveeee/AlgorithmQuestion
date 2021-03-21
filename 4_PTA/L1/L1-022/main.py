n =int(input())
list=[]
list= (input().split())
a=b=0
for i in list:
    if(int(i)%2==0):
        a+=1
    else:
        b+=1
print(b,a)

