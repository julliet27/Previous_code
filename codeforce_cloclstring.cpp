#include<bits/stdc++.h>
#define ll long long int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;
void solve(){
	int a,b,c,d;cin>>a>>b>>c>>d;
	map<int,char>mp;
	mp[a]='a';mp[b]='a',mp[c]='b',mp[d]='b';
	string str="";
	for(auto i:mp){
		str+=i.second;
	}
	if(str=="abab" || str=="baba") cout<<"YES"<<endline;
	else cout<<"NO"<<endline;
}
int main() {
	int t;cin>>t;
	while(t--){
	solve();
	}
    return 0;
}
