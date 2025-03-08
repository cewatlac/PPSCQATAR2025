#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    n%=1000;
    if (n == 0)cout << 0;
    else cout << 1000-n;


return 0;
}
