#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    long long n , x , c = 0;
    cin >> n >> x;
    while (n--){
        char w ;
        long long z ;
        cin >> w >> z;
        if (w == '+')x+=z;
        else if (x >= z)x-=z;
        else c++;
    }
    cout << x << " " << c;
    return 0;
}
