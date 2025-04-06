#include <iostream>
#include <vector>
using namespace std;

vector<int> rotateLeft(int d, vector<int> arr) {
    int n = arr.size();
    if (d == 0 || n == 0) {
        return arr;
    }
    d = d % n;
    vector<int> rotated(n);
    for (int i = 0; i < n; i++) {
        int newIndex = (i + d) % n;
        rotated[i] = arr[newIndex];
    }
    return rotated;
}

int main() {
    int n, d;
    cin >> n >> d;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    vector<int> result = rotateLeft(d, arr);
    for (int i = 0; i < n; i++) {
        cout << result[i];
        if (i < n - 1) cout << " ";
    }
    cout << endl;
    return 0;
}
