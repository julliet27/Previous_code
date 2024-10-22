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
		vector<ll>a,b;
		for(int i=0;i<n;i++){
			int ai;cin>>ai;
			a.push_back(ai);
		}
		for(int i=0;i<n;i++){
			int bi;cin>>bi;
			b.push_back(bi);
		}
		int cnt=0;
		for(int i=0;i<n;i++){
			if(b[i]<a[i]){
				cnt++;
				a.push_back(b[i]);
				sort(a.begin(),a.end());
			}
		}
		cout<<cnt<<endline;
	}
    return 0;
}
