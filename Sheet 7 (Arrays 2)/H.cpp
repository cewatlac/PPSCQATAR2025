#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n; cin >> n; int arr[12]; int sum = 0;
    for (int i = 0; i < 12; i++) cin >> arr[i];

    if (n == 0) {
        cout << 0 << endl;
        return 0;
    }

    sort(arr, arr + 12, greater<int>());

    for (int i = 0; i < 12; i++) {
        sum += arr[i];
        if (sum >= n) {
            cout << i + 1 << endl;
            return 0;
        }
    }

    cout << -1 << endl;
    return 0;
}
