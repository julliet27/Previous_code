#include<bits/stdc++.h>
#define ll long long int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;

int main() {
	int t;cin>>t;
	while(t--){
		int x;cin>>x;
		int mx=-1,ans=0;
		for(int y=1;y<x;y++){
			int tmp=__gcd(x,y)+y;
			if(tmp>mx){
				mx=tmp;
				ans=y;
				cout<<y<<" "<<tmp<<endline;
			}
		}
		cout<<ans<<endline;
		
	}
    return 0;
}
