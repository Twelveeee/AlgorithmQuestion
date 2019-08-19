k=int(input())
zhaolist=[]
zhao=''
while(zhao!='End'):
    zhao=input()
    zhaolist.append(zhao)
for i in range(len(zhaolist)):
    if((i+1)%(k+1)==0):
        print(zhaolist[i])
        continue
    if(zhaolist[i]=='ChuiZi'):
        print('Bu')
    if(zhaolist[i]=='JianDao'):
        print('ChuiZi')
    if(zhaolist[i]=='Bu'):
        print('JianDao')
    if(zhaolist[i]=='End'):
        break
