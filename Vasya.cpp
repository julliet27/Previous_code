#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m,s;
    cin>>n>>m;
    s=n+n/(m-1);
    if(n%(m-1)==0){
        s-=1;
    }
    cout<<s<<"\n";

    return 0;
}