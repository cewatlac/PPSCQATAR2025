#include <bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin >> t;
    while (t--){
        long long a , b , c , n , maxi = -1 , co = 0 ;
        cin >> a >> b >> c >> n;
        maxi = max(a , max(b , c));
        co += maxi - a;
        co += maxi - b;
        co += maxi - c;
        n -= co;
        if (n >= 0 && n % 3 == 0)cout <<"YES\n";
        else cout <<"NO\n";

    }
}
