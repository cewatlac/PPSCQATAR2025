#include <iostream>
#include <cmath>
using namespace std;
int main(){

    int n , h , w;
    cin >> n >> h >> w;
    cout << (n-h+1)*(n-w+1);
    return 0;
}
