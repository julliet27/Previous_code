#include<bits/stdc++.h>
#define ll long long int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;

int main() {
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		vector<int>vec(n-1,0);
		for(int i=0;i>n;i++) cin>>vec[i];
		vector<ll>ans(n,0);
		ans[0]=vec[0]+1;
	}
    return 0;
}
