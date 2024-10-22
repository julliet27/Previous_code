#include<bits/stdc++.h>
#define ll long long int
#define u int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;
int main(){
    fast_cin();
    int t;cin>>t;
    while(t--){
        ll n;cin>>n;
        vector<ll>vec(n,0);
        unordered_map<ll,ll>mp;
        ll cnt=0;
        vector<ll>square;
        for(ll i=0;i<n;i++){
            cin>>vec[i];
            mp[vec[i]]++;
            if(vec[i]-(sqrt(vec[i])*sqrt(vec[i]))==0){
                square.push_back(vec[i]);
            }
        }
        for(auto i:mp){
            if(i.second>1){
                cnt+=i.second/2;
            }
        }
        cnt+=square.size()/2;
        cout<<cnt<<endline;
    }
    return 0;
}
