#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
#include <set>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int q, op, x;
    cin >> q;

    deque<int> dq;
    multiset<int> sorted;

    while (q--)
    {
        cin >> op;
        if (op == 1)
        {
            cin >> x;
            dq.push_back(x);
        }
        else if (op == 2)
        {
            if (!sorted.empty())
            {
                cout << *sorted.begin() << '\n';
                sorted.erase(sorted.begin());
            }
            else
            {
                cout << dq.front() << '\n';
                dq.pop_front();
            }
        }
        else
        {
            sorted.insert(dq.begin(), dq.end());
            dq.clear();
        }
    }

    return 0;
}
