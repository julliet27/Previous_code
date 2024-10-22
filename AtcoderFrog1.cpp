#include<bits/stdc++.h>
#define ll long long int
#define u int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;
int main(){
    fast_cin();
    int n; cin>>n;
    vector<int>vec(n+1,0);
    vector<int>dp(n+1,0);
    for(int i=1;i<=n;i++) cin>>vec[i];
    dp[n-1]=abs(vec[n-1]-vec[n]);
    for(int i=n-2;i>0;i--){
        dp[i]=min(abs(vec[i]-vec[i+1])+dp[i+1],abs(vec[i]-vec[i+2])+dp[i+2]);
    }
    cout<<dp[1]<<endline;
    return 0;
}

