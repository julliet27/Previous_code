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
		if(n<4) cout<<-1<<endline;
		else{
			vector<int>ans;
			for(int i=n;i>=1;i--){
				if(i&1) ans.push_back(i);
			}
			ans.push_back(4);
			ans.push_back(2);
			for(int i=6;i<=n;i+=2){
				ans.push_back(i);
			}
			for(int i=0;i<n;i++){
				 cout<<ans[i]<<" ";
			}
			cout<<endline;
			
			
		}
    }
    return 0;
}

