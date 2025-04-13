#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool boolDetection(char y) {
    return (y == 'Y');
}

int main() {
    ll q;
    cin >> q;

    string sign;
    ll integer;
    char y;

    ll l = -2e9, r = 2e9;

    while (q--) {
        cin >> sign >> integer >> y;

        if (!boolDetection(y)) {
            if (sign == ">=") sign = "<";
            else if (sign == ">") sign = "<=";
            else if (sign == "<=") sign = ">";
            else if (sign == "<") sign = ">=";
        }

        if (sign == ">") {
            l = max(l, integer + 1);
        } else if (sign == ">=") {
            l = max(l, integer);
        } else if (sign == "<=") {
            r = min(r, integer);
        } else if (sign == "<") {
            r = min(r, integer - 1);
        }
    }

    if (l <= r) {
        cout << l;
    } else {
        cout << "Impossible";
    }

    return 0;
}
