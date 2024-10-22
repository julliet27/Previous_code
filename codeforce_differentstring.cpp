#include<bits/stdc++.h>
#define ll long long int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;
void solve(){
	string str1;cin>>str1;
	
	unordered_map<char,int>mp;
	for(int i=0;i<str1.size();i++){
		mp[str1[i]]++;
	}
	
	if(mp.size()<=1){
		cout<<"NO"<<endline;
	}
	else{
		cout<<"YES"<<endline;
		string str="";
		for(int i=1;i<str1.size();i++){
			str+=str1[i];
		}
		str+=str1[0];
		cout<<str<<endline;
	}
}
int main() {
	int t;cin>>t;
	while(t--){
	solve();
	}
    return 0;
}
