#include <bits/stdc++.h>
using namespace std;

int fun(int n, int c){
    if (c >= n){return 1;}
    if (n%2){return fun(n/2 + 1, c) + fun(n/2 , c);}
    return 2 * fun(n/2,c);
}

int main(){
    int n, c;
    while (cin >> n >> c){
        cout << fun(n,c) << '\n';
    }
}
