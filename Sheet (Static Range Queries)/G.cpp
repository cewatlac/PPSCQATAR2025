#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
    int n, x, q, a, b, t; cin >> n;
    vector<long long> v(n+1,0), g(n+1);
    for (int i = 0; i < n; i++){
        cin >> x;
        v[i+1] = x;
        g[i] = x;
    }
    for (int i = 1; i < n+1; i++){
        v[i] += v[i-1];
    }
    sort(g.begin(),g.end());
    for (int i = 1; i < n+1; i++){
        g[i] += g[i-1];
    }
    cin >> q;
    while (q--){
        cin >> t;
        if (t == 1){
            cin >> a >> b;
            cout << v[b] - v[a-1] << '\n';
        }
        else {
            cin >> a >> b;
            cout << g[b] - g[a-1] << '\n';
        }
    }
}
