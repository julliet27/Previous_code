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
		unordered_map<int ,int>mp;
		int n;cin>>n;
		bool flag=false;
		for(int i=0;i<n;i++){
			int a;cin>>a;
			mp[a]++;
		}
		for(auto i:mp){
			if(i.second>=3){
				cout<<i.first<<endline;
				flag=true;
				break;
			}
		}
		if(!flag) cout<<-1<<endline;
	}
    return 0;
}

