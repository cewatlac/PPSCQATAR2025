#include <iostream>

using namespace std;

int main()
{
    bool p(true);
    int n, x, a, b;
    cin >> n >> x;
    while (n--)
    {
        cin >> a >> b;
        if (x == a || x == b || x == 7 - a || x == 7 - b)
        {
            p = false;
        }
        x = 7 - x;
    }
    cout << (p ? "YES" : "NO") << endl;
    return 0;
}
