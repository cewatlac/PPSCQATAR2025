#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
	cin.tie(nullptr);
    ll s = 0;
    int n; cin >> n;
    vector<int> v1(n), v2(n);

    for (auto &x : v1) cin >> x;
    for (auto &y : v2) cin >> y;

    for (int i = 0; i < n; i++) s += v1[i] * v2[i];
	cout << (!s ? "Yes" : "No");
}
