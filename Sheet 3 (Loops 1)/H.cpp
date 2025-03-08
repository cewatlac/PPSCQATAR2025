#include <iostream>
#include <iomanip>
using namespace std;
int main(){ 
    int n , c = 0 ,p , q;;
    cin >> n;
    for (int i = 0 ; i < n ; i++){
        cin >> p >> q;
        if (p <= q-2)c++;
    }
    cout << c;

}
