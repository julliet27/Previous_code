#include<bits/stdc++.h>
#define ll long long int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;
void solve(){
	int n;cin>>n;
	string s2;cin>>s2;
	
	map<char,int>check;
	for(int a=0;a<s2.size();a++){
		char chr=tolower(s2[a]);
		check[chr-'a']++;
	}
	
	if(check.size()<26) cout<<"NO"<<endline;
	else cout<<"YES"<<endline;
}
int main() {
	int t=1;
	while(t--){
	solve();
	}
    return 0;
}
