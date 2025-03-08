#include <iostream>
using namespace std;

int main()
{
    int t , p = 0 , cr = 0;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        if (x > 0)p+=x;
        if (x < 0 && p == 0)cr++;
        if (x <0 && p!=0 )p--;
    }
cout <<cr;


    return 0;
}
