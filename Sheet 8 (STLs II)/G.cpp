#include <iostream>
#include <vector>
#include <string>

using namespace std;
int main() {

    string s;
    cin >> s;

    vector<char> stack; 

    for (int i = 0; i < s.length(); ++i) {
        char current_char = s[i];
        if (stack.empty()) {
            stack.push_back(current_char);
        } else {
            if (stack.back() == current_char) {
                
                stack.pop_back();
            } else {

                stack.push_back(current_char);
            }
        }
    }

    if (stack.empty()) {
        cout << "Yes" ;
    } else {
        cout << "No" ;
    }

    return 0;
}
