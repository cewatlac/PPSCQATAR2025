#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n , m , arr[55];
    cin >> n >> m ;
    for (int i = 0 ; i <  m ; i ++){
        cin >> arr[i];
    }
    sort(arr ,arr+m);
    int mini = 10065 ;
    for (int i = 0 ; i < m ; i ++){
        if (i+n-1 >= m)break;
        if (mini > arr[i+n-1]- arr[i])mini = arr[i+n-1]- arr[i];
    }
    cout << mini ;
return 0;
}
