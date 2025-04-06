#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int a,b,c; cin >>a>>b>>c;
    int arr[3] = {a,b,c};
    sort(arr, arr+3,greater<int>());
    cout << arr[0] + arr[1] << endl;
}
