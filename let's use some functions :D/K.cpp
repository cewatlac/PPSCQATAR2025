#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double r,x,y;
    cin >> r >> x >> y;
    double ans=sqrt((x*x)+(y*y));
    if (ans < r) cout << 2;
    else cout << ceil(ans/r);
}
