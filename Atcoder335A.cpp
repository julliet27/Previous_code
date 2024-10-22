#include<bits/stdc++.h>
#define ll long long int
#define u int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;
int main(){
    fast_cin();
    string str;cin>>str;
    string ans="";
    for(int ii=0;ii<str.size()-1;ii++){
        ans+=str[ii];
    }
    ans+='4';
    cout<<ans<<endline;
    return 0;
}

