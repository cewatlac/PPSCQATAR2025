#include <bits/stdc++.h>
using namespace std;
int main(){

    long long a , b ,x;
    cin >> a >> b >> x;
    long long div_A , div_B = b / x;
    if (a % x==0){
        div_B -= a/x;
        div_B++;
    }
    else{
       div_B -= a/x;
    }
    cout <<  div_B ;


}
