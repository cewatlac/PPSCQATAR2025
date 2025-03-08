#include <iostream>
#include "algorithm"
using namespace std;

int main() {
    int n;
    cin >> n;
    int dor = 1 ,able = 0;
    while (n >= dor +able){
        n -= dor + able;
        able += dor;
        dor++;
    }
    cout << dor-1 ;



}
