#include <bits/stdc++.h>
using namespace std;

set<string> v;
void getResult(string input, int l, int r){
    if (l == r){
        v.insert(input);
        return;
    }
    for (int i = l; i <= r; i++){
        swap(input[l], input[i]);
        getResult(input, l + 1 , r);
        swap(input[l], input[i]);
    }
    return;
}

int main(){
    string s; cin >> s;
    int n = s.length();
    getResult(s, 0, n - 1);
    cout << v.size() << '\n';
    for (auto i : v) {cout << i << '\n';}
    return 0;
}
