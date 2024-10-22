#include<bits/stdc++.h>
#define ll long long int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;
void solve(){
	int n;cin>>n;
	vector<int>vec(n+1,0);
	int p;cin>>p;
	for(int i=0;i<p;i++){
		int a; cin>>a; vec[a]++;
	}
	int m;cin>>m;
	for(int i=0;i<m;i++){
		int a; cin>>a; vec[a]++;
	}
	bool flag=false;
	for(int i=1;i<=n;i++){
		if(vec[i]==0){
			flag=true;
			break;
		}
	}
	if(flag) cout<<"Oh, my keyboard!"<<endline;
	else cout<<"I become the guy."<<endline;
}
int main() {
	int t=1;
	while(t--){
	solve();
	}
    return 0;
}
