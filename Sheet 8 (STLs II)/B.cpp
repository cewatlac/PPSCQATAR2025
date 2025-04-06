#include <stack>
#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    stack<int> s;
    int t;
    cin >> t;
    int command;
    int num;

    while (t--)
    {
        cin >> command;
        if (command == 1)
        {
            cin >> num;
            s.push(num);
        }
        else if (command == 2)
        {
            if (!s.empty())
                s.pop();
        }
        else
        {
            if (s.empty())
            {
                cout << "Empty!\n";
            }
            else
            {
                cout << s.top() << '\n';
            }
        }
    }
}
