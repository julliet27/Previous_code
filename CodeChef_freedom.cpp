#include<bits/stdc++.h>
#define ll long long int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;
const int mx=1e9+1;
int main(){
    fast_cin();
    
    int t;cin>>t;
    while(t--){
        ll n;cin>>n;
        vector<ll>vec(n+1,0);
        map<ll,int>check;
        for(int i=1;i<=n;i++) cin>>vec[i];
        
        for(int i=1;i<=n;i++){
            check[vec[i]]+=1;
        }
        int ans=0;
        for(int i=1;i<=n;i++){
			int mn=0,x=vec[i];
            if(x-3!=0 && x%(x-3) ==0 ) mn= x/(x-3);
            
            if(check[mn]!=0){
                ans++;
                //cout<<check[mn]<<" "<<mn<<" "<<vec[i]<<endline;
            } 
        }
        cout<<ans<<endline;

    }
    return 0;
}




