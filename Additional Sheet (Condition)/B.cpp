#include <iostream>

using namespace std;
int main()
{
    int m1,d1,m2,d2;
    cin>>m1>>d1>>m2>>d2;
    if(m1>13&&m2>13&&d1==30&&d2==1){
        cout<<"1"<<endl;
    }
    else if(m1==1&&d1==31||m1==3&&d1==31||m1==5&&d1==31||m1==7&&d1==31||m1==8&&d1==31||m1==10&&d1==31||m1==12&&d1==31){
        cout<<"1"<<endl;
    }
    else if(m1==2&&d1==28){
        cout<<"1"<<endl;
    }
    else if(m2==m1+1&&d2==1||m1==12&&m2==1&&d2==1){
        cout<<"1"<<endl;
    }
    else{
        cout<<"0"<<endl;
    }

    
    return 0;
}
