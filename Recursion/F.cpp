#include <bits/stdc++.h>
#define ll long long
using namespace std;

string damage(int c, int t, int h){
    if (c == 0){return "No";}
    int a, b; cin >> a >> b;
    if (a < t && b > h){return "Yes";}
    return damage(c-1, t, h);
}

int main(){
    int n, s, d; cin >> n >> s >> d;
    cout << damage(n,s,d);
}
