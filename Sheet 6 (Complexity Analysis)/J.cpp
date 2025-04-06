#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    long long arr[n],sum=0;
    for (int i=0; i<n; i++){cin >> arr[i];sum+=arr[i];}
    long long x;
    cin >> x;
    long long ans=(x/sum)*n, b=(x/sum)*sum;
    for (int i=0;i<n;i++){
        if (b>x)break;
        ans++;
        b+=arr[i];
    }
    cout << ans;
}
