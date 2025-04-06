#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin >> s;
  set <char> X (s.begin(), s.end());
  if (X.size()%2==0){
    cout << "CHAT WITH HER!";
  }
  else{
    cout << "IGNORE HIM!";
  }
  return 0;
}
