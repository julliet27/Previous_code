#include<bits/stdc++.h>
#define ll long long int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;
void solve(){
	vector<ll>vec;
	for(int i=0;i<4;i++){
		ll a;cin>>a;
		vec.push_back(a);
	}
	sort(vec.begin(),vec.end());
	ll mx=vec[3];
	ll a=mx-vec[0],b=mx-vec[1],c=mx-vec[2];
	cout<<a<<" "<<b<<" "<<c<<endline;
}
int main() {
	int t=1;
	while(t--){
	solve();
	}
    return 0;
}
