#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int t,n;
    cin>>t;
    for(long long int i=0;i<t;i++){
        cin>>n;
        long long int ans=0;
        for(long long int j=1;j<=n/2;j++){
            ans+=(j*j*8);
        }
        cout<<ans<<endl;
    }
    return 0;
}