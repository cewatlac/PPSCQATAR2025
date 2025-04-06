#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
using namespace std;
int func(){
    int n,x,value=1,tmp;
    cin >> n >> x;
    set<int> S;
    for (int i=0;i<n;i++){cin >> tmp; S.insert(tmp);}
    while (x>0){
        if (S.count(value)==0) {S.insert(value);x--;}
        value++;
    }
    vector<int> V;
    for (int x:S) V.push_back(x);
    for (int i=0;i<S.size();i++){
        if (i+1!=V[i]){
            cout << i << "\n";
            return 0;
        }
    }
    cout << V[S.size()-1] << "\n";
    return 0;
}
int main(){
    int t;
    cin >> t;
    while (t--) func();
}
