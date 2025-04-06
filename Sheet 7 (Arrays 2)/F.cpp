#include <iostream>
using namespace std;

int main() {
    int n, maxx = 1, cur_maxx = 1; 
    cin >> n; int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];

    for (int i = 1; i < n; i++) { 
        if (a[i] >= a[i-1]) {
            cur_maxx++; 
        } else {
            maxx = max(maxx, cur_maxx); 
            cur_maxx = 1; 
        }
    }
    maxx = max(maxx, cur_maxx); 

    cout << maxx << endl;
    return 0;
}
