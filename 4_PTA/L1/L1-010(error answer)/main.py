a,b,c=map(int,input().split())
x=y=z=0
if(a>b and a>c):
    x=a
    if(b>c):
        y=b
        z=c
    elif(c>b):
        y=c 
        z=b
if(b>a and b>c):
    x=b
    if(a>c):
        y=a
        z=c
    elif(c>a):
        y=c
        z=a
if(c>b and c>a):
    x=c
    if(b>a):
        y=b
        z=a
    elif(a>b):
        y=a
        z=b
print(z,end="")
print("->",end="")
print(y,end="")
print("->",end="")
print(x)