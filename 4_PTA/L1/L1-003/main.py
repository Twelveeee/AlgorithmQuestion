li =list (map(int,input()))
n1=n2=n3=n4=n5=n6=n7=n8=n9=n0=0
for i in range(0,len(li)):
    if(li[i]==1):n1+=1
    if(li[i]==2):n2+=1
    if(li[i]==3):n3+=1
    if(li[i]==4):n4+=1
    if(li[i]==5):n5+=1
    if(li[i]==6):n6+=1
    if(li[i]==7):n7+=1
    if(li[i]==8):n8+=1
    if(li[i]==9):n9+=1
    if(li[i]==0):n0+=1
if(n0!=0):print("0:"+ str(n0))
if(n1!=0):print("1:"+ str(n1))
if(n2!=0):print("2:"+ str(n2))
if(n3!=0):print("3:"+ str(n3))
if(n4!=0):print("4:"+ str(n4))
if(n5!=0):print("5:"+ str(n5))
if(n6!=0):print("6:"+ str(n6))
if(n7!=0):print("7:"+ str(n7))
if(n8!=0):print("8:"+ str(n8))
if(n9!=0):print("9:"+ str(n9))