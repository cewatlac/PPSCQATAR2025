#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fast ios::sync_with_stdio(0);cout.tie(0);cin.tie(0);
int main() {
    int n , m;
    cin >> n >> m;
    string ans = "";
    char ch = 'a';
    for (int  i= 0 ; i < n ; i ++){
            ans += ch;
        if (i < m-1)ch+=1;
        else if (ch!='a') ch-=1;
        else{
            ch+=1;
        }

    }
    cout << ans;
}
