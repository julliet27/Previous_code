#include<bits/stdc++.h>
#define ll long long int
#define u int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;
int main(){
    fast_cin();
    vector<ll>vec;
    set<ll>s;
    ll num=1;
    int n=12;
    for(int i=0;i<n;i++){
        vec.push_back(num);
        num=num*10+1;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                s.insert(vec[i]+vec[j]+vec[k]);
            }
        }
    }
    int inp;cin>>inp;
    ll ans =0,cnt=0;
    for(auto i:s){
        ans=i;
        cnt++;
        if(cnt==inp) break;
    }
    cout<<ans<<endline;
    return 0;
}

