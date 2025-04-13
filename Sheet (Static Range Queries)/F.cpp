#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;

    unordered_map<int, int> freq;
    unordered_map<int, int> freqCount;

    int l, r;
    while (q--)
    {
        cin >> l >> r;

        if (l == 1)
        {
            int old = freq[r];
            freq[r]++;

            freqCount[old]--;
            freqCount[old + 1]++;
        }
        else if (l == 2)
        {
            if (freq[r])
            {
                int old = freq[r];
                freq[r]--;
                freqCount[old]--;
                freqCount[old - 1]++;
            }
        }
        else if (l == 3)
        {
            if (freqCount[r] > 0)
                cout << 1 << "\n";
            else
                cout << 0 << "\n";
        }
    }

    return 0;
}
