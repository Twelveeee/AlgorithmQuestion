n=int(input())
list1=[0]*n
list2=[0]*n
list3=[0]*n
for _ in range(n):
    list1[_],list2[_],list3[_]=map(str,input().split())
for _ in range(n):
    if(int(list2[_])<15 or int(list2[_])>20 or int(list3[_])<50 or int(list3[_])>70):
        print(list1[_])