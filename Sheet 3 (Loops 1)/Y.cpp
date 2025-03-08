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
    int n , c = 0 ,maxi = 0;
    string x;
    cin >> n >> x;
    for (int i =0 ;i < x.size() ; i ++){
        if (x[i]=='D')c--;
        else c++;
        maxi = max(maxi , c);
    }
    cout << maxi ;


    return 0;
}
