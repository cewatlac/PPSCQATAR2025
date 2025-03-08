#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n , h , c = 0 ;
    cin >> n >> h;
    for (int i = 0 ; i < n ; i++){
        int x;
        cin >> x;
        if (x > h )c+=2;
        else c++;
    }
    cout << c;
    

return 0;
}
