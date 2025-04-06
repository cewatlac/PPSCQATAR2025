#include <iostream>
using namespace std;
int main() {
    int arr[5][5]={0},arr2[3][3];
    //Adding elements
    for (int i=1; i<4; i++){for (int j=1; j<4; j++) cin >> arr[i][j];}
    
    //Main part (Calculation)
    for (int i=1;i<4;i++){
        for (int j=1;j<4;j++){
            int tmp= arr[i][j]+arr[i-1][j]+arr[i+1][j]+arr[i][j-1]+arr[i][j+1];
            if (tmp%2==0) arr2[i-1][j-1]=1;
            else arr2[i-1][j-1]=0;
        }
    }
    
    //Print out the result
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            cout << arr2[i][j];
        }
        cout << "\n";
    }
}
