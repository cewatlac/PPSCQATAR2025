#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
    int n, k, m = INT_MAX; cin >> n >> k;
    vector<int> v(n+1), h;
    for (int i = 1; i < n+1; i++){cin >> v[i];}
    for (int i = 1; i < n+1; i++){
        v[i] += v[i-1];
    }
    for (int i = k; i < n+1; i++){
        h.push_back(v[i]-v[i-k]);
    }
    auto g = min_element(h.begin(),h.end());
    cout << distance(h.begin(),g)+1;
}
