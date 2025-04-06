#include <iostream>
#include <queue>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    queue<int> q;

    while (T--) {
        int query;
        cin >> query;
        if (query == 1) {
            int n;
            cin >> n;
            q.push(n);
        } else if (query == 2) {
            if (!q.empty()) {
                q.pop();
            }
        } else if (query == 3) {
            if (!q.empty()) {
                cout << q.front()<< "\n";
            } else {
                cout << "Empty!\n";
            }
        }
    }
}
