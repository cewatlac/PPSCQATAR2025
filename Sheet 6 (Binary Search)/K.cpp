#include <iostream>
#include <deque>
#include <map>
#include <set>
#include <algorithm>
#include <vector>
#include <cmath>
#include <stack>
#include <queue>
using namespace std;
long long n, c;
vector < long long >pos;
map < char, int > mp;
long long a[3], b[3];
long long flos;
bool val(long long md) {
    long long cost = 0;
    long long bre = md * mp['B'];
    long long costb = max((long long)0, (bre - a[0]) * b[0]);
    cost += costb;

    bre = md * mp['S'];
    long long coste = max((long long)0, (bre - a[1]) * b[1]);
    cost += coste;

    bre = md * mp['C'];
    coste = max((long long)0, (bre - a[2]) * b[2]);
    cost += coste;
    // cout << cost <<"\n";
    if (cost <= flos)return true;
    else return false;

}
long long BS() {
    long long low = 1, high = 1e12 + 100, mid, ans;
    while (low <= high) {
        mid = (high + low) / 2;
        // cout << mid <<"\n";
        if (val(mid)) {
            low = mid + 1;
            ans = mid;
        }
        else high = mid - 1;
    }
    return ans;
}
int main()
{
    string x;
    cin >> x;
    for (int i = 0; i < x.size(); i++)mp[x[i]]++;

    cin >> a[0] >> a[1] >> a[2];
    cin >> b[0] >> b[1] >> b[2];
    cin >> flos;
    cout << BS();


    return 0;
}
