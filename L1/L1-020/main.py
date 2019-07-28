import sys
hh,mm=map(str,input().split(":"))
if(int(hh)<12 or int(hh)==12 and int(mm)==0):
    print("Only",hh,end=":")
    print(mm,end=".")
    print("  Too early to Dang.")
    sys.exit(0)
hh=int(hh)-12
if(int(mm)!=0):hh+=1
for i in range(hh):
    print("Dang",end="")
