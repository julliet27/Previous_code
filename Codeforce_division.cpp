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
		if( n>= 1900 ) cout<<"Division "<<1<<endline;
		else if( 1600 <= n && n<=1899 ) cout<<"Division "<<2<<endline;
		else if( 1400 <= n && n<=1599 ) cout<<"Division "<<3<<endline;
		else cout<<"Division "<<4<<endline;
    }
    return 0;
}

