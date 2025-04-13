#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, q, num, l, r;
    cin >> n;

    vector<int> nums(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        nums[i] = num;
        if (i > 0)
        {
            nums[i] += nums[i - 1];
        }
    }

    cin >> q;
    while (q--)
    {
        cin >> l >> r;
        cout << nums[r] - nums[l - 1] << '\n';
    }

    return 0;
}
