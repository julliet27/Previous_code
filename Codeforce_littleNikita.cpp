#include<bits/stdc++.h>
#define ll long long int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;
void solve(){
	int n,m;cin>>n>>m;
	if(n==m) cout<<"Yes"<<endline;
	else if(n>m && (n-m)%2==0) cout<<"Yes"<<endline;
	else cout<<"No"<<endline;
}
int main() {
	int t;cin>>t;
	while(t--){
		solve();
	}
	
    return 0;
}
