#include <iostream>
#include <deque>
#include <string>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    bool reverse=false;
    int n,tmp;
    cin >> n;
    deque<int> D;
    while (n--){
        string a;
        cin >> a;
        if (a=="toFront"){
            cin >> tmp; 
            if (!reverse) D.push_front(tmp);
            else D.push_back(tmp);
        }
        else if (a=="push_back"){
            cin >> tmp; 
            if (!reverse) D.push_back(tmp);
            else D.push_front(tmp);
        }
        else if (a=="reverse"){reverse=!reverse;}
        else if(a=="front"){
            if (!D.empty() && !reverse) {cout << D.front() << "\n"; D.pop_front();}
            else if (!D.empty() && reverse) {cout << D.back() << "\n"; D.pop_back();}
            else cout << "No job for Ada?\n";
        }
        else if(a=="back"){
            if (!D.empty() && !reverse){cout << D.back() << "\n"; D.pop_back();}
            else if (!D.empty() && reverse) {cout << D.front() << "\n"; D.pop_front();}
            else cout << "No job for Ada?\n";
        }
    }
}
