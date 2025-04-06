#include <iostream>
#include<algorithm>
#include <string>
using namespace std;
int main(){
    int n,i=1;
    cin >> n;
    string a= to_string(n),b=a;
    reverse(a.begin(),a.end());
    for (int i=1;i<10;i++){
        if (a==b) break;
        a= string(i,'0')+to_string(n),b=a;
        reverse(a.begin(),a.end());
    }
    if (a==b)cout<<"Yes";
    else cout<<"No";
}
