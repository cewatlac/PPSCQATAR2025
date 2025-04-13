
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
signed main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int tt;
    cin>>tt;
    while(tt--){
        int n,k;cin>>n>>k;
        vector<int>v(n);
        for(int i = 0; i < n; i++)
            cin>>v[i];
        
        int p_sum = 0, ans = 0;
        for(int i = 1; i < n; i++){
            p_sum += v[i - 1];

            if(v[i] * 100 <= k * p_sum)
                continue;
           
            int value = ceil((v[i] * 100 * 1.0) / k * 1.0);
            ans += (value - p_sum);
            p_sum = value;
        }
        cout<<ans<<endl;
    }
    return 0;
}
