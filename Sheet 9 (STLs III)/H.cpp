#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        unordered_set<int> bottom_trains;
        for (int i = 0; i < n; ++i)
        {
            int train;
            cin >> train;
            bottom_trains.insert(train);
        }

        int collisions = 0;
        for (int i = 0; i < m; ++i)
        {
            int train;
            cin >> train;
            if (bottom_trains.count(train))
            {
                collisions++;
            }
        }

        cout << collisions << '\n';
    }

    return 0;
}
