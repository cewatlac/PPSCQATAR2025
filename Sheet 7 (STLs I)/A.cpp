#include <iostream>
#include <string>
#include<algorithm>
#include<array>
#include<vector>
using namespace std;
int main()
{
vector <int> pos , neg , z ;
int n ; cin >> n ;
int arr[n];
for(int i = 0 ; i<n  ;i++){
    cin >> arr[i];
    if(arr[i]>0)pos.push_back(arr[i]);
    else if (arr[i]<0)neg.push_back(arr[i]);
    else z.push_back(arr[i]);
}
if(pos.empty()){
    pos.push_back(neg.back());
    neg.pop_back();
    pos.push_back(neg.back());
    neg.pop_back();
}
if(neg.size()%2==0){
    z.push_back(neg.back());
    neg.pop_back();
}
cout << neg.size() << " " ;
for(int i=0; i< neg.size();i++)cout << neg[i] << " ";
cout << endl ;

cout << pos.size() << " ";
for(int i=0; i< pos.size();i++)cout << pos[i] << " ";
cout << endl ;

cout << z.size() << " ";
for(int i=0; i< z.size();i++)cout << z[i] << " ";
cout << endl ;

}
