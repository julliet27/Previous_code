#include<bits/stdc++.h>
#define ll long long int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;
void solve(){
	ll a,b;cin>>a>>b;
	ll div=a/b;
	if(a%b>0){
		div++;
	}
	ll tmp=div*b;
	cout<<tmp-a<<endline;
}
int main() {
	int t;cin>>t;
	while(t--){
	  solve();
	}
    return 0;
}
