#include <iostream> 
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
using namespace std;
int value(char x) {
    if (x == '+')return 1;
    return -1;
}
int main()
{
    
    int t;
    cin >> t;
    while (t--) {
        int N, M;
        string S;
        cin >> N >> M >> S;
        
        vector<int> prefix(N + 1, 0);
        vector<int> prefix_max(N + 1, 0), prefix_min(N + 1, 0);

        for (int i = 0; i < N; i++) {
            prefix[i + 1] = prefix[i] + value(S[i]);
            prefix_max[i + 1] = max(prefix_max[i], prefix[i + 1]);
            prefix_min[i + 1] = min(prefix_min[i], prefix[i + 1]);
        }
      
        
        vector<int> suffix(N + 1, 0);
        vector<int> suffix_max(N + 1, 0), suffix_min(N + 1, 0);

        for (int i = N - 1; i >= 0; i--) {
            suffix[i] = value(S[i]) + suffix[i + 1];
            suffix_max[i] = max(0, value(S[i]) + suffix_max[i + 1]);
            suffix_min[i] = min(0, value(S[i]) + suffix_min[i + 1]);
        }
        
        for (int q = 0; q < M; q++) {
            int L, R;
            cin >> L >> R;
            L--;

            int maximum = max(prefix_max[L], prefix[L] + suffix_max[R]);
            int minimum = min(prefix_min[L], prefix[L] + suffix_min[R]);
            cout << maximum  - minimum + 1 << '\n';
        }
    }
    return 0;
}
