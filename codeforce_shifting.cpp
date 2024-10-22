#include<bits/stdc++.h>
#define ll long long int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;

int main() {
	int t;cin>>t;
	while(t--){
		string str;cin>>str;
		
		int ans=0;
		for(int i=str.size()-1;i>=0;i--){
			//cout<<str<<endline;
			if(str[i]=='0'){
				int k=i-1;
				
				while(str[k]==str[i] && k>=0){
					k--;
				}
				if(k<=0) {i=0; break;}
				
				ans+=abs(k-i)+1;
				str[k]='0';
				str[i]='1';
			}
		}
		cout<<str<<" "<<ans<<endline;
	}
    return 0;
}
