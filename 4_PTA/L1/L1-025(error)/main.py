list=[]
list=input().split()
c=0
if(not list[0].isdigit()):
        list[0]="?"
        c=1

if(not list[1].isdigit()):
        list[1]="?"
        c=1

if(c!=1):
    d=int(list[0])+int(list[1])
if(c==1):
    d="?"
print(list[0],"+",list[1],"=",d)