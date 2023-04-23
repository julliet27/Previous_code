#include <bits/stdc++.h> 
using namespace std;

int main(){
     long long int t,a,b,c;
    cin>>t;
    for (int i=0;i<t;i++){
        cin>>a>>b>>c;
        if (a==b && b==c && a==c){
            cout<<a+1<<" "<<b+1<<" "<<c+1;
        }
        else if (a>b && a>c){
            cout<<a-a<<" "<<a-b+1<<" "<<a-c+1;
        }
        else if(b>a && b>c){
            cout<<b-a+1<<" "<<b-b<<" "<<b-c+1;
        }
        else{
            cout<<c-a+1<<" "<<c-b+1<<" "<<c-c;
        }
        cout<<"\n";
    }
    return 0;
}