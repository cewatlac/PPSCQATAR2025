#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;
using ll = long long;

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    int n;
    cin >> n;

    vector<int> arr(n);
    for (auto &i : arr)
        cin >> i;
    sort(arr.begin(), arr.end());

    auto good = [&](double mid) -> bool {
        int cnt = 1;
        double r = arr[0] + mid * 2;
        for(int i = 1; i < n; i++) {
            if(arr[i] <= r) continue;
            cnt++;
            r = arr[i] + mid * 2;
        }
        return cnt <= 3;
    };

    double l = 0, r = 1;
    while(!good(r)) r *= 2;

    for(int _ = 0; _ < 100; _++) {
        double mid = (l + r) / 2;
        if(good(mid))
            r = mid;
        else
            l = mid;
    }

    cout << fixed << setprecision(6) << r << '\n';

    int cnt = 1;
    double end = arr[0] + r * 2;
    cout << arr[0] + r << ' ';
    for(int i = 1; i < n; i++) {
        if(arr[i] <= end) continue;
        cnt++;
        end = arr[i] + r * 2;
        cout << arr[i] + r << ' ';
    }
    while(cnt < 3)
        cout << "0.000000 ", cnt++;

    return 0;
}
