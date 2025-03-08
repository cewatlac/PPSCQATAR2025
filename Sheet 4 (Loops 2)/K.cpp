#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int n , o1 = 0  , ze = 0 ;
    cin >> n;
    string x;
    cin >> x;
    for (int i = 0 ; i < x.size() ; i++){
        if (x[i] == '1')o1++;
        else ze++;
    }
    cout << abs(ze-o1);
    
    return 0;
}
