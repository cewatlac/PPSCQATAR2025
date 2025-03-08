#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    float n;
    cin >> n;
    float ans = 0;
    if (n <= 50){ans = 0.5*n;}
    else if (n <= 150){
        ans = 0.5*50;
        n-= 50;
        ans+= n*0.75;
    }
    else if (n <= 250){
        ans = 0.5*50;
        ans+= 100*0.75;
        n-=150;
        ans += n *1.2;

    }
    else{
        ans = 0.5*50;
        ans+= 100*0.75;
        ans+= 100*1.2;
        n-= 250;
        ans += n *1.5;
    }
    float nm = ans/100;
    cout <<fixed << setprecision(2) << nm*20 + ans;
return 0;
}

