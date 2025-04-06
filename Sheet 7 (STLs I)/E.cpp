#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    int n,a=0;
    cin >> n;
    int arr[n];
    for (int i=0;i<n;i++) {cin >> arr[i];}
    vector<int> arr2;
    for (int i=1;i<n;i++){
        if (arr[i]==1) arr2.push_back(arr[i-1]);
    }
    arr2.push_back(arr[n-1]);
    cout << arr2.size() <<"\n";
    for (int i=0;i<arr2.size();i++) cout << arr2[i] << ' ';
}
