#include<bits/stdc++.h>
#define ll long long
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;
int main(){
    //fast_cin();
    ll mx=2e7+10;
    vector<ll>dp(mx,0);
    dp[1]=0;dp[2]=1;dp[3]=1;
    for(ll i=4;i<=2e7;i++){
        dp[i]=1+dp[i-1];
        if(i%2==0){
            dp[i]=min(dp[i],dp[i/2]+1);
        }
        if(i%3==0){
            dp[i]=min(dp[i],dp[i/3]+1);
        }
    }
    ll t;cin>>t;
    for(int i=1;i<=t;i++){
        ll n;cin>>n;
        cout<<"Case "<<i<<": "<<dp[n]<<endline;
    }
    return 0;
}



