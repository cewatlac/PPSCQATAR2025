#include <iostream>

using namespace std;

int main(){
    long long l1, r1, l2, r2, k;
    cin >> l1 >> r1 >> l2 >> r2 >> k;
    
    if(max(l1, l2) > min(r1, r2)){
        cout << 0;
    }else if(max(l1, l2) <= k && k <= min(r1, r2)){
        cout << min(r1, r2) - max(l1, l2);
    }else{
        cout << min(r1, r2) - max(l1, l2) + 1;
    }
}
