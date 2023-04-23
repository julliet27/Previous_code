#include <bits/stdc++.h> 
using namespace std;
int main(){
    int t,n;
    cin>>t;
    int A=2020+2020;
    int B=2020+2021;
    int C=2021+2021;
    for(int i=0;i<t;i++){
        cin>>n;
        if(n%A==0){
            cout<<"YES"<<"\n";
        }
        else if(n%B==0){
            cout<<"YES"<<"\n";
        }
        else if(n%C==0){
            cout<<"YES"<<"\n";    
        }
        else{
            cout<<"NO"<<"\n";
        }
    }
    return 0;
}