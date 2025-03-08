#include <iostream>

using namespace std;
int main()
{
    int n;
    cin >> n;
    while (true){
        
        int a = n , c = 0;
        while(a!=0){
            c+=a%10;
            a/=10;
        }
        if (c % 4 == 0)break;
        n++;
    }
    cout << n ;
    return 0;
}
