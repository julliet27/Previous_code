#include<bits/stdc++.h>
#define ll long long int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;
int main(){
    fast_cin();
    ll t;cin>>t;
    while(t--){
        ll x,y,n;cin>>x>>y>>n;
        ll a=n/x;
        while(x*a+y!=n){
            a--;n--;
        }
        cout<<a<<endline;
    }
    return 0;
}


