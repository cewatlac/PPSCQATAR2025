#include <iostream>
#include <stack>
#include <queue>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;
long long n, k , a[100005] , b[100005] , ans = 0 , tempk  , ta[100005], tb[10005];
bool val(long long md) {
    tempk = k;
    for (int i = 0; i < n; i++) {
        ta[i] = a[i];
        tb[i] = b[i];
        if (ta[i] * md > tb[i] + tempk)return 0;
        else {
            if (tb[i] >= ta[i] * md) tb[i] -= ta[i] * md;
            else {
                tempk -= (ta[i] * md - tb[i]);
                tb[i] = 0;  
            }
        }
    }
    return 1;
}
void bin() {
    long long st = 0, ed = 1e10, md;
    while (st <= ed) {
        md = (st + ed) / 2;
        if (val(md)) {
            st = md + 1;
            ans = md;
        }
        else {
            ed = md - 1;
        }
    }

}
int main()
{
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    bin();
    cout << ans;
    

    return 0;
}
