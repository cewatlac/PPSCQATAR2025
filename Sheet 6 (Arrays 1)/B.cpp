#include <iostream>

using namespace std;
int main()
{
    int lev;
    cin >> lev;
    int n , m ;
    bool ck[200] = {0};
    cin >> n ;
    for (int i =0 ;i <n ; i ++){
        int c;
        cin >> c;
        ck[c]=1;
    }
    cin >> m ;
    for (int i =0 ;i <m ; i ++){
        int c;
        cin >> c;
        ck[c]=1;
    }
    for (int  i = 1 ; i <= lev ;  i++){
        if (ck[i] == 0){
            cout <<"Oh, my keyboard!";
            return 0;
        }
    }
    cout << "I become the guy.";
    
    
    return 0;
}
