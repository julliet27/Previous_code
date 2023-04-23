#include <bits/stdc++.h>
using namespace std;
int main(){
     int n,a,b;
          cin>>n>>a>>b;
          if(abs(a-b)==1)
          {
                if((a==1&&b==2)||(a==2&&b==1))
                {
                      cout<<"1"<<endl;
                }
                else if(a<n&&b<n)
                {
                      cout<<"2"<<endl;
                }
                else
                {
                      cout<<"1"<<endl;
                }
          }
          else if(abs(a-b)==2)
          {
                cout<<"1"<<endl;
          }
          else
          {
                cout<<"0"<<endl;
          }
    }
    return 0;
}