#include <iostream>
#include <vector>
#include <map>

using namespace std;


int QKparr(int arr[],int low,int high){
    int povot = arr[low];
    while (low<high){
        /* high 从右到左找小于 x.key 的记录 */
        while (low<high && arr[high] >= povot) high--;
        arr[low]=arr[high];
        while (low<high && arr[low] <= povot) low++;
        arr[high]=arr[low];
    }
    arr[low]=povot;
    return low;
}

void qsort(int arr[],int low,int high){
    if(low<high){
        int povot = QKparr(arr,low,high);
        qsort(arr,low,povot-1);
        qsort(arr,povot+1,high);
    }
}


int main() {
    int n=5;
    int arr[]={3,2,4,1,2};
    qsort(arr,0,n-1);
    for (int i = 0; i < n; ++i) {
        cout << arr[i]<<endl;
    }
}