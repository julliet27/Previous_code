#include<bits/stdc++.h>
#define ll long long int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;

int main() {
	int a,b,c,d;cin>>a>>b>>c>>d;
	map<ll,ll>mp;
	mp[a]++;
	mp[b]++;
	mp[c]++;
	mp[d]++;
	cout<<4-mp.size()<<endline;
    return 0;
}
