#include <iostream>
using namespace std;
int main()
{
    int a , b , c;
    cin >> a >> b >> c;
    int re = a - b;
    if (re >= c)cout << 0;
    else cout << c - re;
return 0;
}
