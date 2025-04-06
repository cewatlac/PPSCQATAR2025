#include <iostream>
#include <set>

using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string chars;
    getline(cin, chars);

    set<char> uniqe_chars;
    for (int i = 0; i < chars.size(); i++)
    {
        if (chars[i] != '{' && chars[i] != '}' && chars[i] != ',' && chars[i] != ' ')
        {
            uniqe_chars.insert(chars[i]);
        }
    }

    cout << uniqe_chars.size();
}
