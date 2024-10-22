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
		ll ans=0;
		int cnt[26][26]={0};
		for(int i=0;i<n;i++){
			string str; cin>>str;
			for(int j=0;j<2;j++){
				for(char ii='a';ii<='k';ii++){
					if(ii==str[j]) continue;
					string a=str;a[j]=ii;
					ans+=cnt[a[0]-'a'][a[1]-'a'];
				}
			}
			cnt[str[0]-'a'][str[1]-'a']++;
			
		}
		
	
		cout<<ans<<endline;
		
	}
    return 0;
}

