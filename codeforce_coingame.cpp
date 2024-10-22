#include<bits/stdc++.h>
#define ll long long int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;

int main() {
	int t; cin>>t;
	while(t--){
		int n;cin>>n;
		string str;cin>>str;
		if(str.size()==1) cout<<"YES"<<endline;
		else if(str.size()==2){
			if(str[0]=='U' && str[1]=='U') cout<<"NO"<<endline;
			else if(str[0]=='D' && str[1]=='D') cout<<"NO"<<endline;
			else cout<<"YES"<<endline;
		}
		else{
			int cnt=0;
			for(int i=0;i<n;i++){
				if(str[i]=='U') cnt++;
			}
			if(cnt%2==0) cout<<"NO"<<endline;
			else cout<<"YES"<<endline;
		}
	}
    return 0;
}
