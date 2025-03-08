#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int k , n , w;
    cin >> k >> n >> w;
    for (int i = 1 ; i <= w ;i++){
        n -= i*k;
    }
    if (n < 0 )cout << n*-1;
    else cout << 0;

return 0;
}

