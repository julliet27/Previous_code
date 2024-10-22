#include<bits/stdc++.h>
#define ll long long int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;
int main(){
    fast_cin();
    ll sum=0;
    // input
    ll n;cin>>n;
    vector<ll>vec(n,0);
    for(ll i=0;i<n;i++){ cin>>vec[i];sum+=vec[i];}
    ll x;cin>>x;



    ll ans=0;
    ll tmp=x/sum;
    ans+=tmp*n;
    x=x%sum;
    ll i=0;
    while(x>=0){
        ans++;
        x-=vec[i];
        i++;
    }
    cout<<ans<<endline;
    return 0;
}


