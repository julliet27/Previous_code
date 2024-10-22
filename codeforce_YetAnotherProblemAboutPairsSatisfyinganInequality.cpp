#include<bits/stdc++.h>
#define ll long long int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;

/// SOlVE
void solve(){
	int n;cin>>n;
	vector<ll>vec(n+1,0);
	vector<ll>v;
	for(int i=1;i<=n;i++){
		cin>>vec[i];
	}
	ll ans=0;
	for(int i=0;i<vec.size();i++){
		if(vec[i]>=i) continue;
		ans+=(lower_bound(v.begin(), v.end(), vec[i]) - v.begin());
		v.push_back(i);
		
	}
	
	cout<<ans<<endline;
	
}

/// MAIN
int main() {
	int t;cin>>t;
	while( t-- ) { solve();}
    return 0;
}
