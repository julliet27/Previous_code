#include <bits/stdc++.h> 
using namespace std;
int main(){
    int n,m,count=0;
    cin>>n>>m;
    for(int i=0;m!=0 && n!=0;i++){
        count++;
        m-=1;
        n-=1;
    }
    if(count%2!=0){
        cout<<"Akshat"<<"\n";
    }
    else{
        cout<<"Malvika"<<"\n";
    }
    return 0;
}