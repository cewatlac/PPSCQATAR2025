#include <iostream>
using namespace std;
bool bl[100];
int main(){
  int n,m,l,r,ans;
	cin>>n>>m;
	ans=m;
	for(int i=0;i<n;i++){
		cin>>l>>r;
		for(int j=l-1;j<r;j++){
			ans-=!bl[j];
			bl[j]=true;
		}
	}
	cout<<ans<<endl;
	for(int i=0;i<m;i++) {
		if(!bl[i]){
			cout<<(i+1)<<" ";
		}
	}
	return 0;
}
