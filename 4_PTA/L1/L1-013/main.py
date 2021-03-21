def na(a):
    if(a==1):
        return 1
    sum=a*na(a-1)
    return sum

def main():
    b=int(input())
    c=0
    for i in range(b):
        c+=na(i+1)
    print(c)
 
if __name__ == '__main__':
    main()
