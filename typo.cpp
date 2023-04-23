#include <bits/stdc++.h>
using namespace std;
int main(){
    string S,T;
    char A;
    cin>>S>>T;
    if (S==T){
        cout<<"Yes"<<"\n";
    }
    else{
        for (int i=0;i<S.size();i++){
            if (S[i]==T[i]){}
            else{
                A=S[i];
                S[i]=S[i+1];
                S[i+1]=A;
                break;
            }
        }
        if (S==T){
            cout<<"Yes"<<"\n";
        }
        else{
            cout<<"No"<<"\n";
        }
    }
    return 0;
}