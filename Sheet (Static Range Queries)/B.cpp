#include <iostream>
#include <vector>
using namespace std;

int beautifulTriplets(int d, const vector<int>& arr) {
    int count = 0;
    for (size_t i = 0; i < arr.size(); ++i) {
        int second = arr[i] + d;
        int third = arr[i] + 2 * d;

        bool foundSecond = false, foundThird = false;
        for (size_t j = i + 1; j < arr.size(); ++j) {
            if (arr[j] == second) foundSecond = true;
            if (arr[j] == third && foundSecond) {
                foundThird = true;
                break;
            }
        }

        if (foundSecond && foundThird) count++;
    }

    return count;
}

int main() {
    int n, d;
    cin >> n >> d;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << beautifulTriplets(d, arr) << endl;

    return 0;
}
