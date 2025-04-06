#include <iostream>
#include <string>
#include <algorithm>
#include <set>
using namespace std;

int main() {
    int a; cin >> a;
    int arr[a]; for (int i = 0; i < a; i++) cin >> arr[i];

    set<int> second(arr, arr + a);
    
    if (second.size() == a) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
