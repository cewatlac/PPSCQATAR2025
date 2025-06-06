#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int matrix[n][n];

    for (int i = 0; i < n; i++) {
        matrix[0][i] = 1;
        matrix[i][0] = 1;
    }

    
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < n; j++) {
            matrix[i][j] = matrix[i-1][j] + matrix[i][j-1];
        }
    }

    
    cout << matrix[n-1][n-1] << endl;

    return 0;
}
