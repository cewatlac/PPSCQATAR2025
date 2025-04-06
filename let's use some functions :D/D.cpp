#include <iostream>
using namespace std;

int main() {
    int H, A;
    cin >> H >> A;
    int c = 0;
    while (H > 0) {
        H -= A;
        c++;
    }
    cout << c;
    }
