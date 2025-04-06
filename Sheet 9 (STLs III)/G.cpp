#include <bits/stdc++.h>

using namespace std;

int main(){
    map<string, bool> mp;
    int n; cin >> n;
    string s[n+1],s1;
    for(int i = 0; i < n; i++){cin >> s[i];}
    for(int i = n-1; i >= 0; i--){
        if(mp[s[i]] != 1 ){cout<< s[i] << '\n'; mp[s[i]] = 1;}
    }
    return 0;
}
