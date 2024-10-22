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
		unordered_map<int,int>mp;
		for(int i=0;i<n;i++){
			int a;cin>>a;
			mp[a]++;
		}
		int cnt=0;
		for(auto i:mp){
			int tmp=i.second;
			while(tmp>2){
				if(tmp-3>2){
					tmp=tmp-3;
					cnt++;
				}
				else{
					cnt++;
					tmp=0;
				}
			}
		}
		cout<<cnt<<endline;
	}
    return 0;
}
