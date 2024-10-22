#include<bits/stdc++.h>
#define ll long long int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;

int main() {
	int t;cin>>t;
	while(t--){
		ll n,x,y;cin>>n>>x>>y;
		ll sum=0;
		for(int i=0;i<n;i++){
			ll a;cin>>a;
			sum+=min(a*x,y);
			
		}
		
		cout<<sum<<endline;
	}
    return 0;
}
