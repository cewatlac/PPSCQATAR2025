#include <iostream>

using namespace std;
int main()
{
    int a,b;
   
    cin>>a>>b;
   

     if(a<b&&a+3>b||b<a&&b+3>a){
         cout<<"Yes"<<endl;
    }
   
    else  {
        cout<<"No"<<endl;
    }
    
  
    
    return 0;
}
