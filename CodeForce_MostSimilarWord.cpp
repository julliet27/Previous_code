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
		ll n,k;cin>>n>>k;
		vector<string>vec(n,"");
		for(int i=0;i<n;i++) cin>>vec[i];
		int ans=1000000;
		for(int i=0;i<n;i++){
			string tmp=vec[i];
			for(int j=i+1;j<n;j++){
				string tmp1=vec[j];
				int sum=0;
				for(int l=0;l<k;l++){
					sum+=abs(tmp[l]-tmp1[l]);
				}
				ans=min(ans,sum);
			
			}
		
		}
		cout<<ans<<endline;
    }
    return 0;
}

