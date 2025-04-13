#include <iostream>
#include <algorithm>
#include <climits> 
using namespace std;

int main() {
    int n;
    cin >> n;

    long long minPrice = LONG_MAX;

    for (int i = 0; i < n; ++i) {
        long long A, P, X;
        cin >> A >> P >> X;
        long long stockRemaining = X - (A - 0.5);
        if (stockRemaining > 0) {
            minPrice = min(minPrice, P);
        }
    }
    if (minPrice == LONG_MAX) {
        cout << -1 << "\n";
    } else {
        cout << minPrice << "\n";
    }
}
