#include <iostream>
using namespace std;

int main() {
    int t; cin >> t; 

    for (int i = 0; i < t; i++) {
        int n; cin >> n; 
        int arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];

        int even_mismatch = 0, odd_mismatch = 0;

        for (int i = 0; i < n; i++) {
            if (i % 2 == 0 && arr[i] % 2 != 0) even_mismatch++; 
            if (i % 2 == 1 && arr[i] % 2 != 1) odd_mismatch++; 
        }

        
        if (even_mismatch != odd_mismatch) {
            cout << -1 << endl;
        } else {
            cout << even_mismatch << endl; 
        }
    }
}
