#include <bits/stdc++.h> 
using namespace std;
int main(){
    long long int a,b,c,d,e;
    cin>>a;
    for(long long int i=0;i<a;i++){
        cin>>b>>c;
        cin>>d>>e;
        if((b*pow(10,c))>(d*pow(10,e))){
            cout<<">"<<"\n";
        }
        if((b*pow(10,c))<(d*pow(10,e))){
            cout<<"<"<<"\n";
        }
        if((b*pow(10,c))==(d*pow(10,e))){
            cout<<"="<<"\n";
        }
    }
    return 0;
}