#include <iostream>
using namespace std;

int main() {
    int x ; cin >> x;
    int t1 = 0; int t2 = 0; int t3 = 0;
    for (int i = 0; i < x; i++) {
        int a; cin >> a; int b; cin >> b; int c; cin >> c;
        t1 += a; t2 += b; t3 += c;
    
    }
    if (t1 == 0 && t2 == 0 && t3 == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}
