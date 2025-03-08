#include <iostream>
using namespace std;
int main()
{
    int k , a , b , x , y;
    cin >> k >> a >> b;
    x = a/k;
    y = b/k;
    if (x!=y||a%k==0||b %k ==0){
        cout << "OK";
    }
    else cout << "NG";
    
return 0;
}
