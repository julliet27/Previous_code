#include <bits/stdc++.h> 
using namespace std;
int main(){
    string p;
    cin>>p;
    if(p[0]=='H' || p[0]=='Q' || p[0]=='9' || p[0]=='+'){
        if(p[0]=='+' && p.size()==1){
            cout<<"NO"<<"\n";
        }
        else{
            cout<<"YES"<<"\n";
        }
    }
    else{
        cout<<"NO"<<"\n";
    }
    return 0;
}
