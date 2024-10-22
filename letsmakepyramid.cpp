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
		unordered_map<ll,ll>mp;
		for(int i=0;i<n;i++){
			int a;cin>>a;
			mp[a]++;
		}
		vector<pair<ll,ll>>vec;
		for(auto i:mp){
			vec.push_back({i.second,i.first});
		}
		sort(vec.begin(),vec.end());
		for(int i=0;i<vec.size();i++){
			cout<<vec[i].second<<" ";
		}
		cout<<endline;
	}
    return 0;
}
