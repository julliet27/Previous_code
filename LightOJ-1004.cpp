#include<bits/stdc++.h>
#define ll long long
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;
const int N=205;
int dp[N][N],arr[N][N];
int main(){
    fast_cin();
    ll t;cin>>t;
    for(int i=1;i<=t;i++){
        ll n;cin>>n;
        int d=0;
        for(int i=1;i<=n*2-1;i++){
            if(n>=i) d++;
            else d--;
            for(int j=1;j<=d;j++){
                cin>>arr[i][j];

                if(n>=i) dp[i][j]=max(dp[i-1][j],dp[i-1][j-1])+arr[i][j];
                else dp[i][j]=max(dp[i-1][j],dp[i-1][j+1])+arr[i][j];
            }

        }
        cout<<"Case "<<i<<": "<<dp[n*2-1][1]<<endline;
    }
    return 0;
}



