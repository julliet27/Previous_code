#include<bits/stdc++.h>
#define ll long long int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;
void solve(){
	int t;cin>>t;
	string A,B;cin>>A>>B;
	bool falg=false;
	for(int i=0;i<t;i++){
		if(A[i]==B[i]) {}
		else if(A[i]=='G' && B[i]=='B') {}
		else if(A[i]=='B' && B[i]=='G') {}
		else{
			falg=true;
			break;
		}
	}
	if(falg) cout<<"NO"<<endline;
	else cout<<"YES"<<endline;
}
int main() {
	int t;cin>>t;
	while(t--){
	solve();
	}
    return 0;
}
