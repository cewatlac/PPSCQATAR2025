#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string sol(string s){
    for (int i=0;i<s.size();i++){
        if (i%2==0 && s[i]==toupper(s[i])) return "No";
        else if (i%2!=0 && s[i]!=toupper(s[i])) return"No";
    }
    return "Yes";
}
int main(){
    string s;
    cin >> s;
    cout << sol(s);
}
