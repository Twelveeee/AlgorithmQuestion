import numpy as np

ra,ca=map(int,input().split())
a=[[0]*ca for _ in range(ra)]
for i in range(ra):
    a[i]=input().split()
rb,cb=map(int,input().split())
b=[[0]*cb for _ in range(rb)]
#c=[[0]*cb for _ in range(ra)]

for i in range(rb):
    b[i]=input().split()
if(ca!=rb):
    print('Error: %d != %d'%(ca,rb))
else:
    print(np.array(a)*np.array(b))