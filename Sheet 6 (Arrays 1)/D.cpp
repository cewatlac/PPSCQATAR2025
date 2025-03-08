#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n , t = 1;
    while (cin >> n && n){
            int sm = 0 ,arr[55];
    for (int i = 0 ; i < n ; i ++){
            cin >> arr[i];
    sm+=arr[i];
            }
            int ans = 0 , var = sm / n;
    for (int i = 0 ; i < n ; i ++){
            if (arr[i] > var)ans += arr[i] - var;
            }
          cout << "Set #" << t <<"\n";
          cout << "The minimum number of moves is " << ans <<".\n\n";
          t++;
    }
    return 0;
}
