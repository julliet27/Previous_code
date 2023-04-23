#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,m,a,ans;
    cin>>n>>m>>a;
    ans=((m+a-1)/a)*((n+a-1)/a);
    cout<<ans<<"\n";
    return 0;
    
}