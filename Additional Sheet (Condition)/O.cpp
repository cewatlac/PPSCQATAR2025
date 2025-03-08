#include <iostream>
#include <cmath>
using namespace std;

int main()
{
int n, k, l, c, d, p, nl, np;
cin >> n >> k >> l >> c >> d >> p >> nl >> np;
int x=(k*l)/nl,y=c*d,z=p/np;
if(( min(x,min(y,z))/n)<=0){
    cout << 0;
}
else{
    cout << min(x,min(y,z))/n;
}
return 0;
}

