#include<bits/stdc++.h>
#define ll long long int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;
int main(){
    fast_cin();
    int t;cin>>t;
    while(t--){
        ll n;cin>>n;
        vector<ll>vec(n,0),prefix(n,0);
        for(int i=0;i<n;i++) cin>>vec[i];
        prefix[0]=vec[0];
        for(int i=1;i<n;i++){
            prefix[i]=vec[i]+prefix[i-1];
        }
        ll ans=0;
        for(int i=0;i<n;i++){
            ans=max(ans,prefix[i]+vec[i]);
        }

        cout<<ans<<endline;
    }
    return 0;
}



