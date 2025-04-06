#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        int arr[x];
        for (int j = 0; j < x; j++) cin >> arr[j];
        for (int i = 0; i < x; i++) {
            if (count(arr,arr+x,arr[i]) == 1) {
                cout << i+1 << endl; 
            } 
        }
    }
    return 0;
}
