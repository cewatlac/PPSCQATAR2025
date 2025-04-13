#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n, k, q, l ,r; cin >> n >> k >> q;
    vector <int> a(200001), g(200001);
    for (int i=0;i<n;i++){
        cin >> l >> r;
        a[l]++;
        a[r+1]--;
    }
    for (int i=1; i<200001; i++){
        a[i]+=a[i-1];
    }
    int count=0;
    for (int i=0;i<200001;i++){
        if (a[i] >= k) g[i]=1;
    }
    for (int i=0;i<200001;i++){
        g[i]+=g[i-1];
    }
    for (int i=0;i<q;i++){
        cin >> l >> r;
        cout << g[r]-g[l-1] << "\n";
    }
}
