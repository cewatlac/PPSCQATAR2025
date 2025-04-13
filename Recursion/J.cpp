#include <iostream>
#include <string>
#include <vector>
using namespace std;
string rec(string &s, string &result, int i)
{
    if (i == s.size() || s[i] == '.')
        return result;
    result += s[i];
    return rec(s, result, i + 1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string n;
    cin >> n;

    string result = "";
    cout << rec(n, result, 0);

    return 0;
}
