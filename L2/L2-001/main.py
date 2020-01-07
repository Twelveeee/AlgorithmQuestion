N,M,S,D=map(int,input().split())
Num=list(map(int,input().split()))
roads=[[2] for i in range(M)]
for i in range(M):
    roads[i]=list(map(int,input().split()))

lessRoad=[0,0]
whatRoad=[]
maxDistance,maxPerson=0

for i in range(M):
    if(roads[i][1]==S):
        for j in range(M):
