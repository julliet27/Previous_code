#include<bits/stdc++.h>
#define ll long long int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;

int main() {
	vector<ll>vec(11,1);
	vec[1]=1;
	vec[2]=2;
	ll pw=1;
	for(int i=3;i<=10;i++){
		vec[i]=vec[i-1]*i;
	}
	int t;cin>>t;
	for(int i=0;i<t;i++){
		int n;cin>>n;
		for(int j=0;j<n;j++){
			int a;cin>>a;
			cout<<vec[a-1]<<endline;
		}
	}
    return 0;
}
