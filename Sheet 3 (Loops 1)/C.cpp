#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int n , d = 0 , a = 0 ;
    cin >> n ;
    string x;
    cin >> x;
    for (int i = 0 ;i < x.size() ; i ++){
        if (x[i] == 'D')d++;
        else a++;
    }
    if (a > d)cout <<"Anton";
    else if (d > a )cout << "Danik";
    else cout <<"Friendship";
    return 0;
}
