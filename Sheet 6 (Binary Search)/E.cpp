#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <set>
#include <map>
#include <unordered_map>
#include <climits>
using namespace std;
#define ll long long
#define endl "\n"
int n , k , a[100005] , b[100005] , ans = 0 , ta[100005] , tb[100005] ,tempk ;
bool val(long long md){
    tempk = k;
    for (int i = 0 ; i< n ; i ++){
        ta[i] = a[i];
        tb[i] = b[i];
        if (ta[i]*md > tb[i] + tempk)return 0;
        else{
            if (tb[i] >= ta[i]*md)tb[i] -= ta[i] *md;
            else{
                tempk -= (ta[i]*md - tb[i]);
                tb[i] = 0;
            }
        }
    }
return 1;
}
void bin(){
    long long st = 0 , ed = 1e10 , md ;
    while (st <= ed){
        md = (st+ed)/2;
        if (val(md)){
            st = md+1;
            ans = md;
        }
        else{
            ed = md - 1;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    cin >> n >> k;
    for (int i = 0 ; i < n ; i ++){
        cin >> a[i];
    }
    for (int i = 0 ; i < n ; i ++){
        cin >> b[i];
    }
    bin();
    cout << ans;
    return 0 ;
}
