#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int q;
    cin >> q;

    int t, m, cur = 1;
    set<pair<int, int>> mono;
    set<pair<int, int>, greater<>> poly;

    while (q--) {
        cin >> t;

        if (t == 1) {
            cin >> m;

            mono.insert({cur, m});
            poly.insert({m, -cur});

            cur++;
        }
        else if (t == 2) {
            pair<int, int> p = *mono.begin();
            cout << p.first << ' ';

            poly.erase({p.second, -p.first});
            mono.erase(mono.begin());
        }
        else {
            pair<int, int> p = *poly.begin();
            cout << -p.second << ' ';

            mono.erase({-p.second, p.first});
            poly.erase(poly.begin());
        }
    }

    return 0;
}
