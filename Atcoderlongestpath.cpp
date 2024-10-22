#include<bits/stdc++.h>
#define ll long long int
#define u int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;
const int num=1e5+5;
int dp[num];
unordered_map<int,vector<int>>mp;
int mem(int n){
    if(mp[n].size()==0) return 0;
    if(dp[n]!=-1) return dp[n];
    for(int i=0;i<mp[n].size();i++){
        dp[n]=max(dp[n],mem(mp[n][i])+1);
    }
    return dp[n];
}
int main(){
    fast_cin();
    int n,m;cin>>n>>m;
    memset(dp,-1,sizeof(dp));
    for(int i=0;i<m;i++){
        int x,y;cin>>x>>y;
        mp[x].push_back(y);
    }
    for(int i=1;i<=n;i++){
        mem(i);
    }
    int ans=*max_element(dp,dp+n+1);
    cout<<ans<<endline;
    return 0;
}



