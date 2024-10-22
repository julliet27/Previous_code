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
		ll n,k;cin>>n>>k;
		deque<ll>dep;
		for(ll i=0;i<n;i++){
			ll a;cin>>a;
			dep.push_back(a);
		}
		ll ans=0;
		while(!dep.empty() && k>0){
			ll fornt=dep.front(),bac=dep.back();
			if(!dep.empty())dep.pop_front();
			if(!dep.empty())dep.pop_back();
			ll diff=0,e=0,mn=0;
			if(fornt<bac) {
				mn=fornt;
				diff=bac-fornt;
				e=1;
			}
			else {
				mn=bac;
				diff=fornt-bac;
			}
			if(k< mn*2) break;
			else{
				k-=mn*2;
				if(diff==0) ans++;
				else if(e) dep.push_back(diff);
				else dep.push_front(diff);
				ans++;
			}
		}
		cout<<ans<<endline;
    }
    return 0;
}

