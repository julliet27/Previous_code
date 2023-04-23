#include <bits/stdc++.h> 
using namespace std;
int main(){
    int A,B,C,D;
    cin>>A>>B>>C>>D;
    if(A>C){
        cout<<"Aoki"<<"\n";
    }
    else if(A==C){
        if (B<D){
            cout<<"Takahashi"<<"\n";
        }
        else if(B==D){
            cout<<"Takahashi"<<"\n";
        }
        else{
            cout<<"Aoki"<<"\n";
        }
    }
    else{
        cout<<"Takahashi"<<"\n";
    }
    return 0;
}