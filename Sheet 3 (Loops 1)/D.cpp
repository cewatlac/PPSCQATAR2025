#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n , ahmed = 0 ;
    cin >> n;
    for (int i =0 ; i < n ; i ++){
        int a , b , c;
        cin >> a>> b >> c;
        if (a+b+c >=2)ahmed++;
    }
    cout << ahmed;
    return 0;
}
