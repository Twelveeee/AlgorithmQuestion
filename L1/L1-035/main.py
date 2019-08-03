n=[0 for i in range(100)]
a='a'
for i in range(100):
    a=str(input())
    if(a=='.'):
        break
    n[i]=a
if(n[1]==0 or n[1]=='.'):
    print('Momo... No one is for you ...')
elif(n[13]!=0 and n[13]!='.'):
    print(n[1],'and',n[13],'are inviting you to dinner...')
else:
    print(n[1],'is the only one for you...')
