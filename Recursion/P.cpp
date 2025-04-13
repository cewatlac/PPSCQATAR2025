#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    string n;
    cin >> n;
    int length = n.length();
    int index = (1 << length) - 1;

    for (int i = 0; i < length; ++i) {
        if (n[i] == '7') {
            index += (1 << (length - i - 1)); 
        }
    }

    cout << index << "\n";
}
