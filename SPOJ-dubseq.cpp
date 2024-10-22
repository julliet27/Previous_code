#include<bits/stdc++.h>
#define ll long long
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;
int main(){
    //fast_cin();
    int t;cin>>t;
    while(t--){
        string str;cin>>str;
        ll siz=str.size();
        vector<ll>check(256,-1);
        vector<ll>dp(siz+1,0);
        dp[0]=1;
        for(ll i=1;i<=siz;i++){
            dp[i]=(2*(dp[i-1])%mod)%mod;
            if(check[str[i-1]]!=-1){
                dp[i]=(dp[i]-dp[check[str[i-1]]]+mod)%mod;
            }
            check[str[i-1]]=i-1;
        }
        cout<<dp[siz]<<endline;

    }
    return 0;
}


