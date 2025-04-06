#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n; cin >> n;
    int a[n], total = 0, sum = 0, count = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        total += a[i];
    }

    sort(a, a + n, greater<int>()); 

    for (int i = 0; i < n; i++) {
        sum += a[i]; count++;
        if (sum > total - sum) { 
            cout << count << endl;
            return 0;
        }
    }
}
