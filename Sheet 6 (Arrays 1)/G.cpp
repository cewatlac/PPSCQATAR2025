#include <iostream>
#include "algorithm"
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--){
        int n , mov ;
        cin >> n >> mov;
        int a[34] , b[34];
        for (int i = 0 ; i< n ; i ++){
            cin >> a[i];
        }
        for (int i = 0 ; i< n ; i ++){
            cin >> b[i];
        }
        sort (a , a+n);
        sort (b , b+n);
        int pos1 = 0 , pos2 = n-1;
        while (mov --){
            if (a[pos1] < b[pos2]){
                swap(a[pos1] ,b[pos2] );
                pos1++;
                pos2--;
            }
            else break;
        }
        int sm = 0;
        for (int i = 0 ; i< n ; i ++){
            sm+=a[i];
        }
        cout << sm <<"\n";


    }
    return 0;
}
