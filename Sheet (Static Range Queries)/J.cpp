#include <bits/stdc++.h>
#define N 100006
using namespace std;

long long cmsm[N] , a[N] , inc[N], l[N] , r[N] , ans[N];
int main()
{
    ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
        long long m,n,c,d,i,j,k,z, x, y, p, q;

        cin >> n >> m >> k;

        for (int i = 1; i <= n; i++) cin >> a[i];

        for(int i = 1; i <= m; i++)
        {
            cin >> l[i] >> r[i];
            cin >> inc[i];
        }

        for (int i = 1; i <= k; i++)
        {
            cin >> x >> y;

            cmsm[x]++;
            cmsm[y+1]--;
        }

        for (int i = 1; i <= m; i++) cmsm[i]+=cmsm[i-1];

        for (int i = 1; i <= m; i++)
        {
            ans[l[i]]  += cmsm[i] * inc[i];
            ans[r[i]+1]  -= cmsm[i] * inc[i];
        }

        for (int i = 1; i <= n; i++) ans[i]+=ans[i-1];

        for (int i = 1; i <= n; i++) cout << ans[i] + a[i] << " ";

}
