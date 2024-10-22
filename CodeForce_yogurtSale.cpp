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
		int n,a,b;cin>>n>>a>>b;
		int price1=n*a;
		int div=n/2;
		int md=n%2;
		int price2=div*b;
		if(md==1) price2+=a;
		cout<<min(price1,price2)<<endline;
    }
    return 0;
}

