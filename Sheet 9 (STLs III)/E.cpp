#include <string>
#include <iostream>
#include <conio.h>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    vector<string> v;
    vector<int> v2;
    for (int i = 0; i < n; i++){
        string s; cin >> s;
        if (find(v.begin(),v.end(), s) != v.end()){
            auto p = find(v.begin(),v.end(), s);
            int c = v2[distance(v.begin(),p)];
            s += to_string(c);
            v2[distance(v.begin(),p)] += 1;
            cout << s << '\n';
        }
        else{
            v.push_back(s);
            v2.push_back(1);
            cout << "OK" << '\n';
        }
    }
    return 0;
}

