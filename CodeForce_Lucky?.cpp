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
		string str;cin>>str;
		unordered_map<char,int>mp;
		int sz=str.size();
		bool flag=false;
		int sum1=0,sum2=0;
		for(int i=0;i<sz/2;i++){
			sum1+=(str[i]-'0');
		}
		for(int i=sz/2;i<sz;i++){
			sum2+=(str[i]-'0');
		}
		if(sum1!=sum2) cout<<"NO"<<endline;
		else cout<<"YES"<<endline;
    }
    return 0;
}

