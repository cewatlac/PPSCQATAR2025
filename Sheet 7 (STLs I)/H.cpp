#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--){
        int n,max=0;
        cin >> n;
        string s;
        cin >> s;
        vector <int> ans;
        for (int i=0;i<n;i++){
            if (s[i]=='A') ans.push_back(i);
        }
        if (!ans.empty()){
            for (int i=0;i<ans.size()-1;i++){
                if (ans[i+1]-ans[i]>max) max= ans[i+1]-ans[i]-1;
            }
            if (n-1-ans[ans.size()-1]>max) max=n-1-ans[ans.size()-1];
        }
        cout << max << "\n";
    }
}
