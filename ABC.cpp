#include <bits/stdc++.h> 
using namespace std;
int main(){
    int t,n;
    char s;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        string sample="";
        for(int j=0;j<n;j++){
            cin>>s;
            sample+=s;
        }
        if(n==1){
            cout<<"YES"<<"\n";
        }
        else if(n==2){
            if(sample!="11" && sample!="00" ){
                cout<<"YES"<<"\n";
            }
            else{
                cout<<"NO"<<"\n";
            }

        }
        else{
            cout<<"NO"<<"\n";
        }

    }
    return 0;
}