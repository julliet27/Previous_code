#include<bits/stdc++.h>
#define ll long long int
#define u int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;
int main(){
    fast_cin();
    int n,k; cin>>n>>k;
    vector<int>vec(n+1,0);
    vector<int>dp(n+1,1e9);
    for(int i=1;i<=n;i++) cin>>vec[i];
    dp[n]=0;
    for(int i=n;i>0;i--){
        for(int p=i;p>(i-k-1) && p>0;p--){
            dp[p]=min(dp[i]+abs(vec[i]-vec[p]),dp[p]);
        }
    }
    cout<<dp[1]<<endline;
    return 0;
}


