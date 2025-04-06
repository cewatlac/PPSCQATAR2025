#include <iostream>
using namespace std;

bool check(int a, int b, int c) {
    // Check all possible operations
    return (a + b == c || a - b == c || b - a == c || a * b == c || (b != 0 && a / b == c && a % b == 0) || (a != 0 && b / a == c && b % a == 0));
}

int main() {
    int N;
    cin >> N;
    
    while (N--) {
        int a, b, c;
        cin >> a >> b >> c;
        if (check(a, b, c)) {
            cout << "Possible" << '\n';
        } else {
            cout << "Impossible" << '\n';
        }
    }
    
    return 0;
}

