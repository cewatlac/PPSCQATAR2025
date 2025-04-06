#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n,d;
        cin >>  n >> d;
        int arr[n];
        for (int i=0;i<n;i++) cin >> arr[i];
        if (*max_element(arr,arr+n)>d){
            sort(arr,arr+n);
            if (arr[0]+arr[1]>d) cout << "NO\n";
            else cout << "YES\n";
        } 
        else cout << "YES\n";
    }
}
