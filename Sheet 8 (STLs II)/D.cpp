#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
    int t  ; cin >> t ;
    while(t--){
        string s ; cin >> s ;
        stack <char> k ;   bool ok = 0 ;
        for(int i =0 ; i< s.size() ; i++){
            if(s[i] == '[' || s[i] == '{' || s[i] == '(' ){
                k.push(s[i]);
               }
               else if(!k.empty()&&(s[i]-1 == k.top()|| s[i] - 2 == k.top())){
                    k.pop();
               }
               else {
                k.push (s[i]);
               }

        }
            if(k.empty())cout << "YES" << endl;
            else cout << "NO" <<endl ;
        }
    }
