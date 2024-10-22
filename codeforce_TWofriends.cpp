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
		for(int i=1;i<=n;i++) cin>>vec[i];
		int cnt=0;
		for(int i=1;i<=n;i++){
			if(i==vec[vec[i]]) cnt++;
		}
		if(cnt>0) cout<<2<<endline;
		else cout<<3<<endline;
	}
    return 0;
}
