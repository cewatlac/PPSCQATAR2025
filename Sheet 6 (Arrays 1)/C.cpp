#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n , k ,arr[55];
    cin >> n >> k;
    for (int i =1 ;i <= n;i++){
        cin >> arr[i];
    }
    int c = 0;
    for (int i = 1 ; i<= n ;i ++){
        if (arr[i] >= arr[k]&&arr[i] >0){
            c++;
        }
    }
cout << c;
    return 0;
}
