#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t , c=1;
    int x ,y;
    cin >> t >> x;
    t--;
    while (t--){
        cin >>y;
        if (x!=y){
            c++;
            x = y;
        }
        
    }
    cout << c;
return 0;
}

