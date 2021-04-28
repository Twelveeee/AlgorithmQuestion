#include <iostream>
#include <vector>

using namespace std;
typedef long long ll;

int main() {
    int n;
    cin >> n;
    vector<int> arr;
    ll ans =0;
    int count2=0;
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        arr.push_back(a);
    }
    for (int i = 0; i < n; ++i) {
        if(arr[i]==1){
            count2 = 0;
            ans ++;
        }else if(arr[i] ==2){
            count2++;
            ans += count2*2;
        }else if(arr[i]==0){
            break;
        }

    }
    cout << ans<<endl;
}
