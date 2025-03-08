#include <iostream>
using namespace std;

int main()
{
    int t , M = 0 , C = 0;
    cin >> t;
    while(t--){
        int m , c;
        cin >> m >> c;
        if (m > c)M++;
        if (c > m)C++;
    }
    if (M>C)cout << "Mishka";
    else if (C>M)cout << "Chris";
    else cout << "Friendship is magic!^^";
    
        
    return 0;
}
