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
		int n;cin>>n;
		ll ten=1;
		vector<int>vec;
		while(n>0){
			int md=n%10;
			if(md!=0) vec.push_back(md*ten);
			ten=ten*10;
			n=n/10;
		}
		cout<<vec.size()<<endline;
		for(int i:vec){
			cout<<i<<" ";
		}
		cout<<endline;
    }
    return 0;
}

