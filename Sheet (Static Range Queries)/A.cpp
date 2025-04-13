#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, num;
    cin >> n;

    unordered_map<int, int> freq;
    int max = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> num;
        freq[num]++;
        if (freq[num] > max)
            max = freq[num];
    }

    cout << n - max << '\n';

    return 0;
}
