#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int x , sm =0 ;
    cin >> x;
    for (int i = 1 ; i <= x ; i++ ){
        sm += i;
    }
    cout << sm;

}
