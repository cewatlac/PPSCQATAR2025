#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <stack>
#include <queue>

using namespace std;


int main(){
    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int n;
    long long a[101], sm=0, maxi = 0;
    cin >> n;
    for(int i=0; i < n; i++){
        cin >> a[i];
        maxi = max(maxi, a[i]);
    }
    for(int i=0; i < n; i++){
        sm+=maxi - a[i];
    }
    cout << sm;
    return 0;
}


