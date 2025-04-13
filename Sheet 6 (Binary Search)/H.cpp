#include <algorithm>
#include <iostream>
#include <vector>
#define ll long long

using namespace std;

int n, k;
ll arr[200005];

bool can(ll med) {
    ll sum = 0;
    for (int i = n / 2; i < n; ++i) {
        if (arr[i] < med) {
            sum += med - arr[i];
            if (sum > k) return false;
        }
    }
    return sum <= k;
}

int main() {
    cin >> n >> k;
    for (int i = 0; i < n; i++) cin >> arr[i];

    sort(arr, arr + n);

    ll l = arr[n / 2], r = arr[n / 2] + k, ans = arr[n / 2];
    while (l <= r) {
        ll med = (l + r) / 2;
        if (can(med)) {
            ans = med;
            l = med + 1;
        } else {
            r = med - 1;
        }
    }

    cout << ans << endl;

    return 0;
}
