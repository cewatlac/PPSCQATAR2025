#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  for (int i = 0 ; i<t ; i++){
    int n;
    cin >> n;
    set<int> s;
    for (int j = 0 ; j<n ; j++){
      int v;
      cin >> v;
      s.insert(v);
    }
    int Size  = s.size();
    if (Size == n){
      cout << "prekrasnyy\n";
    }
    else{
      cout << "ne krasivo\n";
    }
  }
  return 0;
}
