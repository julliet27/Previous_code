#include<bits/stdc++.h>
#define ll long long int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;
void solve(){
	
	string str;cin>>str;
	string tmStr=str;
	sort(tmStr.begin(),tmStr.end());
	if(tmStr==str){
		cout<<1<<endline;
	}
	else{
		vector<string>vec;
		string tt="";
		for(int i=0;i<str.size();i++){
			if(str[i]=='1'){
				string tmp="";
				while(str[i]=='1' && i<str.size()){
					tmp+=str[i];
					i++;
				
				}
				vec.push_back(tmp);
			}
			else{
				tt+=str[i];
			}
		}
		vec.push_back(tt);
		cout<<vec.size()<<endline;
	}
}
int main() {
	int t;cin>>t;
	while(t--){
	solve();
	}
    return 0;
}
