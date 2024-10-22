#include<bits/stdc++.h>
#define ll long long int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;

/// SOlVE
void solve(){
	int n;cin>>n;
	vector<int>vec(n+1,0);
	map<int,vector<int>>mp;
	for(int i=1;i<=n;i++) cin>>vec[i];
	
	for(int i=1;i<=n;i++){
		mp[vec[i]].push_back(i);
	}
	cout<<endline;
}

/// MAIN
int main() {
	int t;cin>>t;
	while(t--) solve();
    return 0;
}
