#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,x,m,n;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>x>>n>>m;
        while (x>0 && n && x/2+10<x){
            n--;
            x=x/2+10;
        }
	    if (x<=m*10){
            cout<<"YES"<<"\n";
        }
	    else {
            cout<<"NO"<<"\n";
        }
    }
}