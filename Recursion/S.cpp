#include <iostream>
#include <algorithm>
using namespace std;

long long deadlySin(long long x, long long y) {
    return 2 * __gcd(x, y);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x, y;
        cin >> x >> y;
        cout << deadlySin(x, y) << "\n";
    }
    return 0;
}
