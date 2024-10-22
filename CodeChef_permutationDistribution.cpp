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
        ll n;cin>>n;
        vector<ll>vec(n+2,0);
        for(int i=1;i<=n;i++) cin>>vec[i];

        int ans=0;
        for(int i=1;i<=n;i++){
            if(vec[i]==i){
                ans++;
                int tmp=vec[i];
                vec[i]=vec[i+1];
                vec[i+1]=tmp;
            }
        }




        cout<<ans<<endline;


    }
    return 0;
}




