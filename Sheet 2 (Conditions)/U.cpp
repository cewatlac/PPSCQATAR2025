#include <iostream>
using namespace std;
int main()
{
    int h  , w , n;
    cin >> h >> w >> n;
    int maxi  ;
    if (h > w)maxi = h;
    else maxi = w;
    if (n % maxi == 0){
        cout << n/maxi;
    }
    else cout << (n/maxi)+1;
    

    
return 0;
}
