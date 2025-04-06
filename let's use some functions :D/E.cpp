#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, k;
    cin >> n >> k;
    vector<long long> h(n);
    long long t = 0;
    for (int i = 0; i < n; i++) {
        cin >> h[i];
        t += h[i];
    }
    sort(h.begin(), h.end(), greater<long long>());
    if (k >= n) {
        cout << 0 << endl;
        return 0;
    }
    long long a = 0;
    for (int i = k; i < n; i++) {
        a += h[i];
    }
    cout << a << endl;
    return 0;
}
