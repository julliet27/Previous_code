#include<bits/stdc++.h>
#define ll long long int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;

/// SOlVE
void solve(){
	ll n,k;cin>>n>>k;
	vector<ll>vec(n+1,0);
	for(int i=1;i<=n;i++){ cin>>vec[i]; }
	
	ll ans=0,sum=0;
	
	for(ll i=0;i<=n;i++){
		ll now=sum;
		for(ll j=i+1;j<=min(n,i+32);j++){
			
			now+=(vec[j]>>(j-i));
		
		}
		ans=max(now,ans);
		if(i<n) sum+=(vec[i+1]-k);
	}
	cout<<ans<<endline;
	
	
}

/// MAIN
int main() {
	int t;cin>>t;
	while( t-- ) { solve();}
    return 0;
}
