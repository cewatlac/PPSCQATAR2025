#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int arr[5] , c = 0 , ans = -1;
    for (int i = 0; i < 4 ;i ++){
        cin >> arr[i];
    }
    for (int i = 0 ; i < 4 ;i ++){
        for(int j = i+1 ; j < 4 ; j++){
            if (arr[i] == arr[j]){
                c++;
                arr[j]= ans;
                ans--;
            }
        }
    }
    cout << c;
        return 0;
}
