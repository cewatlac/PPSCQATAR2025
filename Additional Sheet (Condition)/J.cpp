#include <iostream>

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    if(min(a, b) % 2 == 0) cout << "Malvika";
    else cout << "Akshat";
}
