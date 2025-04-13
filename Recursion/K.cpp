#include <iostream>
using namespace std;

int main() {
    int X, count=0, bank=0;
    cin >> X;
    while (bank<X){
        count ++;
        bank+=count;
    }
    cout << count;
}
