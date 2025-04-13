#include <iostream>
#include <vector>
using namespace std;

const int MAX_VAL = 1000000;

int compute_g(int x) {
    while (x >= 10) {
        int product = 1;
        while (x > 0) {
            if (x % 10 != 0) 
                product *= x % 10;
            x /= 10;
        }
        x = product;
    }
    return x;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> g(MAX_VAL + 1);
    for (int i = 1; i <= MAX_VAL; ++i) {
        g[i] = compute_g(i);
    }

    vector<vector<int>> freq(10, vector<int>(MAX_VAL + 1, 0));
    for (int i = 1; i <= MAX_VAL; ++i) {
        for (int k = 1; k <= 9; ++k) {
            freq[k][i] = freq[k][i - 1];
        }
        freq[g[i]][i]++;
    }

    int Q;
    cin >> Q;
    while (Q--) {
        int l, r, k;
        cin >> l >> r >> k;
        cout << freq[k][r] - freq[k][l - 1] << "\n";
    }
}
