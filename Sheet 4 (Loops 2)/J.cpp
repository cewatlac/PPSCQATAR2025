#include <iostream>

using namespace std;

int main()
{

    long long n;
    cin >> n;
    int arr[] = {6 , 8 , 4 , 2} ;
    if (n == 0)cout << 1;
    else cout <<arr[n%4];
    
    return 0;
}
