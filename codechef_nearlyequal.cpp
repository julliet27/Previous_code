#include<bits/stdc++.h>
#define ll long long int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;

/// SOlVE
void solve(){
	int n,m;cin>>n>>m;
	string str1,str2;cin>>str1>>str2;
	int ans=100000;
	
	for(int i=0;i<n-m+1;i++){
		int cnt=0;
		for(int j=i,k=0;j<n && k<m ;j++,k++){
			
			if(str1[j]==str2[k]) continue;
			else cnt++;
		}
		
		ans=min(cnt,ans);
		
	}
	cout<<ans<<endline;
}

/// MAIN
int main() {
	int t;cin>>t;
	while(t--){
		solve();
	}
    return 0;
}
