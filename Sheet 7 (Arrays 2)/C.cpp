#include <iostream>
#include <algorithm>
#include <array>
#include <set>
using namespace std;

int main() {
    int n; cin >> n;
    set<int> days;
    for (int i = 0; i < n; i++)  {
        int a,b; cin >> a >> b;
        for (int j = a; j < b+1; j++) {
            days.insert(j);
        }
    }
    cout << days.size() << endl;
    return 0;
}
