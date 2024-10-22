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
		string str;cin>>str;
		string tmp="";
		bool flag=false;
		for(int i=0;i<n;i++){
			
			bool B=false,R=false;
			while(str[i]!='W' && i<n){
				if(str[i]=='B') B=true;
				if(str[i]=='R') R=true;
				i++;
			}
			if(!B && !R) continue;
			if( !B || !R ){
				cout<<"NO"<<endline;
				flag=true;
				break;
			}
			
		}
		if(!flag ) cout<<"YES"<<endline;
	}
    return 0;
}

