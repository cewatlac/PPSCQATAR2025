#include <iostream>
#include <cmath>
using namespace std;

int main()
{
int y,k;
cin >> y >> k;
int maxi = max(y,k);
if(maxi==1)cout << "1/1";
else if(maxi == 2)cout << "5/6";
else if(maxi == 3)cout << "2/3";
else if(maxi == 4)cout << "1/2";
else if(maxi == 5)cout << "1/3";
else cout << "1/6";
    return 0;
}
