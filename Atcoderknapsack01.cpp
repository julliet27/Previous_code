#include<bits/stdc++.h>
#define ll long long int
#define u int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;
const int num=1e5+5;
ll dp[105][num];
int main(){
    fast_cin();
    int N,W;cin>>N>>W;
    vector<pair<ll,ll>>vec;
    memset(dp,0,sizeof(dp));
    for(int i=0;i<N;i++){
        int w,v;cin>>w>>v;
        vec.push_back({w,v});
    }
    for(int i=0;i<=N;i++){
        for(ll w=0;w<=W;w++){
            if(i==0 || w==0) dp[i][w]=0;
            else if(w>=vec[i-1].first){
                dp[i][w]=max(dp[i-1][w-vec[i-1].first]+vec[i-1].second,dp[i-1][w]);
            }
            else dp[i][w]=dp[i-1][w];
        }

    }
    cout<<dp[N][W]<<endline;
    return 0;
}


