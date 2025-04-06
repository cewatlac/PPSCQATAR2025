#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,tmp;
    cin >> n;
    vector<int> a,b,c;
    for (int i=0;i<n;i++){
        cin >> tmp;
        if (tmp==1) a.push_back(i+1);
        else if (tmp==2) b.push_back(i+1);
        else c.push_back(i+1);
    }
    int ans= min(min(a.size(),b.size()),c.size());
    if (ans==0) {cout << 0;return 0;}
    cout << ans << "\n";
    for (int i=0; i<ans; i++){
        cout << a[i] << ' ' << b[i] << ' ' << c[i] << "\n";
    }
}
