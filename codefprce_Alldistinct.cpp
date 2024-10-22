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
		int n;cin>>n;
		vector<int>vec(n,0);
		for(int i=0;i<n;i++) cin>>vec[i];
		set<int>se(vec.begin(),vec.end());
		int ans=se.size();
		int diff=n-ans;
		if(diff%2) ans--;
		cout<<ans<<endline;
	}	
    return 0;
}

