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
        int n;cin>>n;
        string str,tmp1,tmp2; cin>>str;
        tmp1=tmp2=str;
        for(int i=0;i<str.size();i++){
            if(str[i]=='?'){
                tmp1[i]='9';
                tmp2[i]='0';
            }
        }
        ll num=stol(tmp1);
        ll strt=stol(tmp2);
        ll cnt=0;
        if(str.size()==1) cout<<1<<endline;
        else{
            if(str[0]=='?'){
                for(ll i=10;i<=num;i+=9){
                    cnt++;
                }
            }
            else{
                for(ll i=strt;i<=num;i+=9){
                    cnt++;
                }
            }
            cout<<cnt<<endline;
        }
    }
    return 0;
}


