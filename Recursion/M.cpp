#include <iostream>
using namespace std;

int main() {
    long long n, m;
    cin >> n >> m;

    if (m % n != 0) {
        cout << -1 << "\n";
        return 0;
    }

    long long q = m / n; 
    int operations = 0;

    while (q % 2 == 0) {
        q /= 2;
        operations++;
    }

    while (q % 3 == 0) {
        q /= 3;
        operations++;
    }
    
    if (q == 1) {
        cout << operations << endl;
    } else {
        cout << -1 << "\n";
    }
}
