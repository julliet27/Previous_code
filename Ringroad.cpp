#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int n,m,a,time=0,temp=1;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        cin>>a;
        if(a>=temp){
            time+=(a-temp);
        }
        else{
            time+=(n-temp+a);
        }
        temp=a;

    }
    cout<<time<<endl;
    return 0;
}