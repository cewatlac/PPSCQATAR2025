#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string a;
    cin >> a;
    int n=count(a.begin(),a.end(),'+')+1;
    string arr[n];
    int index=0;
    for (int i=0;i<a.size();i+=2){
        arr[index]= a[i];
        index++;
    }
    sort(arr,arr+n);
    for (int i=0;i<n-1;i++) cout << arr[i] << "+";
    cout << arr[n-1];
}
