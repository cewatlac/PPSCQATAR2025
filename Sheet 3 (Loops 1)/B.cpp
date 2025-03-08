#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int x , c = 0;
    cin >> x;
    for (int i =0 ; i < x ;i ++){
        string a ;
        cin >> a;
        if (a[0] == '+' || a[2] == '+')c++;
        else c--;
    }
    cout << c;
    
    return 0;
}
