#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string n,tmp;
    cin >> n;
    for (int i=1;i<11;i++){
        tmp=n;
        reverse(tmp.begin(),tmp.end());
        if (n==tmp)break;
        n= '0'+n;
    }
    if (n==tmp)cout <<"Yes";
    else cout << "No";
}
