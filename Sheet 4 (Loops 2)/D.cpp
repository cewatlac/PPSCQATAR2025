#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

int main()
{
    int k , s , c = 0;
    cin >> k >> s;
    for (int x = 0 ; x <= k ; x++){
        for (int y = 0 ; y <= k ; y++){
            int z = s - (x+y);
            if (z >= 0 && z <= k)c++;
        }
    }
    cout << c;
    return 0;
}
