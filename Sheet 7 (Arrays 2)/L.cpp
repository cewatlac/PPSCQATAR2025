#include <iostream>
using namespace std;

int main() {
    int n; cin >> n; int time = 0;
    int arr[n]; for (int i = 0; i < n; i++) cin >> arr[i];
    
    if (n % 2 != 0) {
        cout << "still running" << endl;
        return 0;
    }
    
    for (int i = 0; i < n; i += 2) {
        time += arr[i + 1] - arr[i];
    }

    cout << time << endl;
    return 0;
}
