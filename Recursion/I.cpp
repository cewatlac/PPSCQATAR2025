#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, k, tmp;
    cin >> n >> k;
    
    for (int i=0;i<n;i++){
        cin >> tmp;
        if (tmp!=k) cout << tmp << " ";
    }
}
