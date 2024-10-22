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
		ll n;cin>>n;
		vector<ll>vec(n,0);
		for(int i=0;i<n;i++) cin>>vec[i];
		ll mn=*min_element(vec.begin(),vec.end());
		ll sum=0;
		for(int i=0;i<n;i++){
			sum+=(vec[i]-mn);
		}
		cout<<sum<<endline;
    }
    return 0;
}

