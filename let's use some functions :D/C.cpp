#include <iostream>
using namespace std;
int main() {
  int N , X , A;
  cin >> N >> X >> A;
  int C = A/X;
  cout << (N + C - 1) / C;
  return 0;
}
