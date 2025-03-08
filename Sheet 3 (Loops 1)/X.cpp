#include <iostream>
#include <vector>
#include <queue>
#include <deque>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int t;
    cin >> t;
    while (t--){
        int x , y , altol  ;
        cin >> x >> y;
        altol = max(max(x,y) , 2 *min(x,y));
        cout << altol * altol <<"\n";
    }


    return 0;
}
