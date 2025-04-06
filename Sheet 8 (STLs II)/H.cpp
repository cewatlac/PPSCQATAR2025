#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int main() {
  int n ; cin >> n ;
  int arr[n];  priority_queue <int , vector<int> , greater<int>> pq ;
  long long sum =0 ; int cnt = 0 ;
  for(int i =0 ; i< n  ;i++){
    cin >> arr[i];
    if(arr[i]+sum>=0){
        sum+= arr[i];
        cnt++;
        pq.push(arr[i]);
    }
    else if(!pq.empty()&& arr[i]>pq.top()){
        sum -= pq.top();
        pq.pop();
        pq.push(arr[i]);
        sum+= arr[i];
    }


  }
 cout << cnt ;
}
