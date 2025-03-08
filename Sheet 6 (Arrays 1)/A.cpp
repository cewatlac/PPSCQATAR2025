#include <iostream>
#include <cmath>
using namespace std;

int main()
{
int a,b,c,sm=0 , arr[1008];
cin >>a >> b;
for (int i = 0 ; i < a ;i ++){
    cin >> arr[i];
    if(arr[i] > b)sm+=2;
    else sm++;
}
cout << sm;
    return 0;
}
