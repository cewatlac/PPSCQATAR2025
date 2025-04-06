#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n,m,tmp;
    cin >> n >> m;
    int arr[n];
    for (int i=0;i<n;i++) cin >> arr[i];
    int Max=arr[0]/m, Pos=1;
    if (arr[0]%m!=0) Max++;
    for (int i=1;i<n;i++){
        tmp= arr[i]/m;
        if (arr[i]%m!=0) tmp++;
        if (tmp>=Max){Max=tmp;Pos=i+1;} 
    }
    cout << Pos;
}
