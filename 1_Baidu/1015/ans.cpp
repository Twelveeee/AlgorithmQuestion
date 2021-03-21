#include <iostream>


const int timecost[] = {1, 2, 5, 10, 12, 23, 43, 50, 120, 122};
using namespace std;
int crossbridge(int n){
    int time;
    if (n==1){
        time = timecost[0];
        return  time;
    } else if (n ==2){
        time = timecost[1];
        return time;
    } else if (n ==3){
        time = timecost[0]+timecost[1]+timecost[2];
        return time;
    }else{
        if(2*timecost[1]>timecost[0]+timecost[n-2])
        {
            time=2*timecost[0]+timecost[n-1]+timecost[n-2];
        }
        else
        {
            time=timecost[0]+timecost[1]+timecost[n-1]+timecost[1];
        }
        return time+crossbridge(n-2);

    }
}
int main() {

    int n ;
    cin >>  n;
    cout << crossbridge(n)<<endl;
    return 0;
}