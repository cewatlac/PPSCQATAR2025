#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

const int OO = INT_MAX;

void solve() {
    int n, k; cin >> n >> k;
    vector<int> v(n + 1), walk(n + 1), pre(n + 1);

    for (int i = 1; i <= n; ++i) cin >> v[i];

    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        cin >> walk[i];
        if (walk[i]) sum += v[i], pre[i] = pre[i - 1];
        else pre[i] = pre[i - 1] + v[i];
    }

    int mx = 0;
    for (int i = 1; i <= n; ++i) {
        int j = i + k - 1;
        if (j > n) break;
        mx = max(mx, pre[j] - pre[i - 1]);
    }

    cout << sum + mx << '\n';
}

int main() {
    FAST
    int tc = 1;
    // cin >> tc;
    while (tc--) solve();
}
