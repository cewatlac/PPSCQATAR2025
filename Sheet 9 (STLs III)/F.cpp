#include <iostream>
#include <set>
using namespace std;
 
int main() {
    int q, m; cin >> q >> m;
    set<int> on;
    for (int i = 0; i < q; i++) {
        int x;
        cin >> x;
        for (int j = 0; j < x; j++) {
            int bulb;
            cin >> bulb;
            on.insert(bulb);
        }
    }
    if (on.size() == m)
        cout << "YES";
    else
        cout << "NO";
    
    return 0;
}
