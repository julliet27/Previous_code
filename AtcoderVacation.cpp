#include<bits/stdc++.h>
#define ll long long int
#define u int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;
int main(){
    fast_cin();
    int n;cin>>n;
    vector<vector<int>>dp;
    for(int i=0;i<n;i++){
        vector<int>tmp(3,0);
        for(int j=0;j<3;j++){
            cin>>tmp[j];
        }
        dp.push_back(tmp);
    }
    for(int i=1;i<n;i++){
        dp[i][0]+=max(dp[i-1][1],dp[i-1][2]);
        dp[i][1]+=max(dp[i-1][0],dp[i-1][2]);
        dp[i][2]+=max(dp[i-1][0],dp[i-1][1]);
    }
    cout<<max({dp[n-1][0],dp[n-1][1],dp[n-1][2]})<<endline;
    return 0;
}

