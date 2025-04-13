#include <bits/stdc++.h>

using namespace std;

bool valid(vector<int> pl, long long cows, long long md){
    int cw = 1, lastbr = pl[0];
    for (int i = 1; i < pl.size(); i++){
        if (pl[i] - lastbr >= md){
            lastbr = pl[i];
            cw++;
        }
    }
    return cw >= cows;
}
int bs(vector<int> v, long long cows){
    long long st = 1,  ed = 1e9+3, md, ans;
    while (st <= ed){
        md = (st + ed)/2;
        if (valid(v, cows, md)){
            st = md + 1;
            ans = md;
        }
        else {
            ed = md - 1;
        }
    }
    return ans;
}

int main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
    int t; cin >> t;
    while(t--){
        long long n, c; cin >> n >> c;
        vector<int> pl(n);
        for (int i = 0; i < n; i++){cin >> pl[i];}
        sort(pl.begin(),pl.end());
        cout << bs(pl, c) << '\n';
    }
}
