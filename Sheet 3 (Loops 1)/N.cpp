#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (1){
            n++;
            int x = n;
        int d1 = x%10;
        x/=10;
        int d2 = x%10;
        x/=10;
        int d3 = x%10;
    x/=10;
        int d4 = x%10;
        if (d1 != d2 && d1 != d3 && d1 != d4 && d2 != d3 && d2 != d4 && d3 != d4){
            break;
        }
    }
    cout << n;
   return(0);
}
