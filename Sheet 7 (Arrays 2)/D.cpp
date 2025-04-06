
#include <bits/stdc++.h>
#include <set>
 
using namespace std;
 
void solve(){
    int n, c = 0; cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++){cin >> ar[i];}
    for (int i : ar){
        if (i%2 != 0){c++;}
    }
    if (c > 0){
        if (c == n and c%2 == 0){cout << "NO\n";}
        else {cout << "YES\n";}
    }
    else {cout << "NO\n";}
}
 
int main(){
    int t; cin >> t;
    while (t--){solve();}
    return 0;
}
