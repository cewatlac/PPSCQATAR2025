#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int A , x , y;
    for (int i = 1 ;i <= 5;  i++){
        for (int j = 1; j <= 5 ; j ++){
          cin >> A;
            if (A == 1){
                x = i ;
                y = j ;
            }

        }

    }
    cout << abs(3 - x) + abs(3 - y);

    return 0;
}
