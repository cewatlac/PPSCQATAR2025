#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
   int t ; cin >> t ;
   string s = "";
   vector<bool> op ; vector<string> v ;
   while(t--){
    int n ; cin >> n ;
    int z ;
    if(n==1){
        string w ; cin >> w ;
        s.append(w);
        v.push_back(w);
        op.push_back(1);
    }
    else if (n==2&&s.size()>0){
        int f ; cin >> f ;
       v.push_back(s.substr(s.size()-f , f));
       s.erase(s.size() - f, f);
       op.push_back(0);
    }
    else if (n==3&&s.size()>0){
        int f ; cin >> f ;
        cout << s[f-1] << endl;
    }


    else if (n==4){
         if(op.back() == 1){
                int m = v.back().size();
            while(m--){
                s.pop_back();
            }
            v.pop_back();
            op.pop_back();
         }
         else{
            s.append(v.back());
            v.pop_back(); op.pop_back();
         }
   }
    }
}
