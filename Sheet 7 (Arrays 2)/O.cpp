#include <iostream>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int arr[n];
    for (int i=0;i<n;i++) cin >> arr[i];
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            for (int K=0;K<n;K++){
                if (i!=K && j!=K && arr[i] == arr[j] + arr[K]){
                    cout << i+1 << " " << j+1 << " " <<K+1;
                    return 0;
                }
            }
        }
    }
    cout << -1;
}
