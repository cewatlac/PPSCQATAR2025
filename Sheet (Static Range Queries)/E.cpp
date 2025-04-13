#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string n;
    cin >> n;

    vector<int> freq(n.size(), 0);
    for (int i = 1; i < n.size(); i++)
    {
        if (n[i] == n[i - 1])
        {
            freq[i] = 1;
        }
        freq[i] += freq[i - 1];
    }

    int m, l, r;
    cin >> m;

    while (m--)
    {
        cin >> l >> r;
        cout << freq[r - 1] - freq[l - 1] << '\n';
    }

    return 0;
}
