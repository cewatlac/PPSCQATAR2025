#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int32_t main() {
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for (int &i : a)
            cin >> i;

        auto good = [&] (ll mid) -> bool {
            ll cnt = 1, end = a[0] + mid - 1;
            for (int i = 1; i < n; i++) {
                if (end < a[i]) {
                    cnt++;
                    end = a[i] + mid - 1;
                }
            }
            return cnt <= k;
        };

        
        ll l = 0, r = 1, ans = 0;

        while (!good(r)) r *= 2;

        while (l <= r) {
            ll mid = (l + r) >> 1;
            if (good(mid)) {
                ans = mid;
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
