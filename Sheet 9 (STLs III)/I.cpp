#include <iostream>
#include <set>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int q;
    cin >> q;
    
    while (q--) {
        int n, r;
        cin >> n >> r;
        
        set<int> monsters;
        
        for (int i = 0; i < n; ++i) {
            int pos;
            cin >> pos;
            monsters.insert(pos);
        }
        
        int shots = 0;
        int pushed = 0;
        
        while (!monsters.empty()) {
            auto it = monsters.end();
            it--;
            int current = *it;
            monsters.erase(it);
            
            if (current - pushed > 0) {
                shots++;
                pushed += r;
            }
            
            while (!monsters.empty()) {
                auto last = monsters.end();
                last--;
                if (*last - pushed <= 0) {
                    monsters.erase(last);
                } else {
                    break;
                }
            }
        }
        
        cout << shots << '\n';
    }
    
    return 0;
}
