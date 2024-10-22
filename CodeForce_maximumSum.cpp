#include<bits/stdc++.h>
#define ll long long int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;
int main(){
    fast_cin();
    int t;cin>>t;
    while(t--){
		int n,k;cin>>n>>k;
		vector<int>vec(n+1,0);
		ll sum=0,num=0,mx=0;
		for(int i=1;i<=n;i++) cin>>vec[i];
		for(int i=1;i<=n;i++){
			sum=sum+vec[i];
			num=num+vec[i];
			if(num<0) num=0;
			mx=max(mx,num);
		}
		ll ans=sum;
		for(int i=1;i<=k;i++){
			ans=(ans+mx+mod)%mod;
			mx=(mx*2)%mod;
		}
		cout<<ans<<endline;
		
    }
   
    return 0;
}

