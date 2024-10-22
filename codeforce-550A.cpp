#include<bits/stdc++.h>
#define ll long long
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;
int main(){
    fast_cin();
    string str;cin>>str;
    string tmp1=str,tmp2=str;
    if(tmp1.find("AB")!=string::npos){
        int idx=tmp1.find("AB");
        tmp1[idx]='0';
        tmp1[idx+1]='1';
        if(tmp1.find("BA")!=string::npos){
            cout<<"YES"<<endline;
            return 0;
        }
    }
    if(tmp2.find("BA")!=string::npos){
        int idx=tmp2.find("BA");
        tmp2[idx]='0';
        tmp2[idx+1]='1';
        if(tmp2.find("AB")!=string::npos){
            cout<<"YES"<<endline;
            return 0;
        }
    }
    cout<<"NO"<<endline;

    return 0;
}

