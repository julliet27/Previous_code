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
        int p;cin>>p;
        int ans=0;
        if(p%2==0){
            ans=(p/2)*6*2+(p/2);
        }
        else{
            ans=(p/2)*6*2+(p/2)+6;
        }
        cout<<ans<<endline;
    }
    return 0;
}


