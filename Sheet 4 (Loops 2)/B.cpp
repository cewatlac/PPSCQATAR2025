#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int n , b , d , dd , c = 0 ;
    cin >> n >> b >> d;
    dd = d ;
    while(n--){
        long long x;
        cin >>x;
        if (x > b)continue;
        else{
                if (dd >= x){
                    dd-=x;
                }
                else{
                    c++;
                    dd = d;
                }
        }
        
    }
    cout << c;
    return 0;
}
