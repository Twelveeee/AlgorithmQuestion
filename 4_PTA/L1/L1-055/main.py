pa,pb=map(int,input().split())
ca,cb,cc=map(int,input().split())
if(pa>pb and (ca==0 or cb ==0 or cc==0) or (ca==cb==cc==0)):
    print('The winner is a: %d + %d'%(pa,(3-ca-cb-cc)))
else:
    print('The winner is b: %d + %d'%(pb,(ca+cb+cc)))
