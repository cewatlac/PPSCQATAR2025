#include <iostream>

using namespace std;

int sm(int i){
    if(i==0){return 0;};
    int x;cin>> x;
    return x + sm(i-1);
}


int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int T;
    cin >> T;
    for(int i=1;i<=T;i++){
        int n;
        cin >> n;
        cout << "Case "<< i <<": "<< sm(n) << endl;
    }
}
