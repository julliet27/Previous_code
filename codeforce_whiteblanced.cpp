#include<bits/stdc++.h>
#define ll long long int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;

int main() {
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		vector<int>vec(n+1,0);
		for(int i=2;i<=n;i++) cin>>vec[i];
		string str;cin>>str;
		vector<int>cnt(n+1,0);
		int ans=0;
		for(int i=n;i>=1;i--){
			if(str[i-1]=='B') cnt[i]--;
			else cnt[i]++;
			if(cnt[i]==0) ans++;
			cnt[vec[i]]+=cnt[i];
		}
		
		cout<<ans<<endline;
		
	}
    return 0;
}
