def main():
    n,zf=map(str,input().split())
    zfc=str(input())
    if(int(n)>len(zfc)):
        for i in range(int(n)-len(zfc)):
            print(zf,end="")
        print(zfc)
    elif(int(n)==len(zfc)):
        print(zfc)
    else:
        print(zfc[len(zfc)-int(n):])
            

if __name__ == '__main__':
    main()