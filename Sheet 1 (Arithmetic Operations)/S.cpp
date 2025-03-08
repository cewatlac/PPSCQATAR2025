#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int l , r , d;
    cin >> l >> r >> d;
    int rr = r /d;
    int ll = (l-1)/d;
    cout << rr - ll ;
return 0;
        }
