#include<bits/stdc++.h>
#define ll long long int
#define u int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;
int main(){
    fast_cin();
    int n;cin>>n;
    string str;cin>>str;
    unordered_map<char,string>mp;
    for(int i=0;i<str.size();i++){
        string tmp="";
        char chr=str[i];
        tmp+=str[i];
        int idx=i+1;
        while(str[i]==str[idx] && idx<str.size()){
            tmp+=str[idx];
            idx++;i++;
        }
        if(mp[chr]==""){mp[chr]=tmp;}
        else{
            if(tmp.size()>mp[chr].size()){
                mp[chr]=tmp;
            }
        }
    }
    ll ans=0;
    for(auto i:mp){
        ans+=i.second.size();
    }
    cout<<ans<<endline;
    return 0;
}

