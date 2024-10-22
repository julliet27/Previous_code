#include<bits/stdc++.h>
#define ll long long int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;

int main() {
	ll t;cin>>t;
	while(t--){
		//ll n,m;cin>>n>>m;
		for(int i=1;i<=100;i++){
			cout<<i<<"--";
			for(int j=2;j<=2000;j=j*2){
				ll num=i*j;
				ll nm=0;
				while(num>0){
					nm+=(num%10);
					num=num/10;
				}
				ll m=0;
				while(nm>0){
					m+=(nm%10);
					nm=nm/10;
				}
				cout<<m<<" ";
			}
			cout<<endline;
		}
	}
    return 0;
}
