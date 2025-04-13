#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int m;
    cin >> m;
    vector<int> b(m);
    for (int i = 0; i < m; i++)
        cin >> b[i];

    vector<int> prefix(n);

    for (int i = 0; i < n; i++) {
        if (i)
            prefix[i] = a[i - 1] + prefix[i - 1];
        else
            prefix[i] = 1;
    }

    for (int i = 0; i < m; i++) {
        int x = b[i];
        int start = 0, end = n - 1, ans = 0;

        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (prefix[mid] <= x) {
                if (mid == n - 1 || prefix[mid + 1] > x) {
                    ans = mid + 1;
                    break;
                } else {
                    start = mid + 1;
                }
            } else {
                end = mid - 1;
            }
        }

        cout << ans << endl;
    }
}
