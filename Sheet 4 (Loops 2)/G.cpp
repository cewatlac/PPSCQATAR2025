#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        long long x , c = 0 ;
        bool ck = true ;
        cin >> x;
        while (x != 1){
            if (x%2 == 0 )x/=2;
            else if (x%3 == 0){
                x/=3;
                x*=2;
            }
            else if (x%5==0){
                x/=5;
                x*=4;
            }
            else{
                cout << -1 <<"\n";
                ck = false;
                break;
            }
            c++;

        }
        if (ck)cout << c <<"\n";
    }
    return 0;
}
