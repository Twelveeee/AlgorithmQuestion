rows = int(input())
list=[[0]*3 for _ in range(rows)]
for row in range(rows):
    list[row][0],list[row][1],list[row][2]=map(int,input().split())
M =int(input())
list2=[0]
list2[0]=input().split()
list3=[[0]*M for _ in range(2)]

for i in range(M):
    for j in range (rows):
        if(int(list2[0][i])==int(list[j][1])):
            list3[i][0]=list[j][0]
            list3[i][1]=list[j][2]
for i in range(M):
    print(list3[i][0],end=' ') 
    print(list3[i][1])
exit(0)

