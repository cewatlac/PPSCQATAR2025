#include <iostream>
#include <string>
#include<algorithm>

#include<set>
using namespace std;
int main()
{
    int t ; cin >> t ;
    while(t--){
    string s , s2 ; cin >> s >> s2 ;
    set<char> st ; set<char>st2;





    for(int i =0 ; i< s.size(); i++){
        st.insert(s[i]);
    }
     for(int i =0 ; i< s2.size(); i++){
        st2.insert(s2[i]);
    }



    multiset<char> last ;
    for(auto it = st.begin(); it != st.end()  ; ++it){
        last.insert(*it);
    }
     for(auto it = st2.begin(); it != st2.end()  ; ++it){
        last.insert(*it);

    }

   bool ok = 0;
     for(auto it = last.begin(); it != prev(last.end())  ; ++it){
              if(*it == *next(it)){
            cout <<"YES"<<endl;
                ok= 1 ;
                 break;
              }
    }

    if(ok==0)cout << "NO"<<endl;

    }

}
