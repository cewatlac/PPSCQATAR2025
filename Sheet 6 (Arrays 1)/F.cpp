#include <bits/stdc++.h>
using namespace std;

int main() {

    long long  n , sm = 0 , mini = 1e10;
    cin >> n;
    for(int i = 0 ; i< n ;i ++){
        long long x ;
        cin >> x;
        sm += x ;
        if (x % 2 != 0 ){
                mini = min(mini , x);
        }
    }
    if ( sm % 2 != 0 )sm-=mini;
    cout << sm;

  return 0;
}
