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
		ll need=(k-1)/(n-1);
		cout<<k+need<<endline;
    }
    return 0;
}

