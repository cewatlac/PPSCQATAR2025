#include <iostream>

using namespace std;

int main ()
{

    int a, b;
    cin >> a >> b;

    int ans = 0;
    for(int i = a ; i <= b ; i++)
    {
        string s = to_string(i);
        int left = 0, right = 4;
        bool ok = 1;
        while(left < right)
        {
            if(s[left] != s[right]) ok = 0;
            left++;
            right--;
        }

        if(ok == 1) ans++;
    }

    cout << ans;

    return 0;
}
