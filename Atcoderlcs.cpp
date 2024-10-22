#include<bits/stdc++.h>
#define ll long long int
#define u int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;
int dp[3005][3005];
pair<int , int> linked[3005][3005];
int main(){
    fast_cin();
    memset(dp,0,sizeof(dp));
    string s,t;cin>>s>>t;
    for(int i=0;i<=s.size();i++){
        for(int j=0;j<=t.size();j++){
            if(i==0 || j==0) continue;
            else if(s[i-1]==t[j-1]){
                dp[i][j]+=dp[i-1][j-1]+1;
                linked[i][j]={i-1,j-1};
            }
            else {
                if(dp[i-1][j]<dp[i][j-1]){
                    dp[i][j]=dp[i][j-1];
                    linked[i][j]={i,j-1};
                }
                else{
                    dp[i][j]=dp[i-1][j];
                    linked[i][j]={i-1,j};
                }
            }
        }
    }
    int a=s.size(),b=t.size();
    string ans="";
    while(a>0 && b>0){
        int c=linked[a][b].first;
        int d=linked[a][b].second;
        if(c==a-1 && d==b-1){
            ans=s[a-1]+ans;
        }
        a=c;b=d;

    }
    cout<<ans<<endline;
    return 0;
}

