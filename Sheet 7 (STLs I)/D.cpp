#include <iostream>
#include <string>
#include <set>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int arr[n];
    string a;
    cin >> a;
    for (int i=0;i<n;i++) cin >> arr[i];
    set<int> arr2;
    for (int i=0;i<n-1;i++){
        if (a[i]=='R' && a[i+1]=='L') arr2.insert((arr[i+1]-arr[i])/2);
    }
    if (arr2.size()==0)cout << -1;
    else cout << *arr2.begin();
}
