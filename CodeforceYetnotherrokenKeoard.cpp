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
        string str;cin>>str;
        string tmp=str,ans="";
        stack<int>lastCapital;
        stack<int>lastSmall;
        for(int i=0;i<str.size();i++){
            if(str[i]=='B'){
                if(!lastCapital.empty()){
                    int tp=lastCapital.top();
                    lastCapital.pop();
                    tmp[tp]='0';
                }
            }
            else if(str[i]=='b'){
                if(!lastSmall.empty()){
                    int tp=lastSmall.top();
                    lastSmall.pop();
                    tmp[tp]='0';
                }
            }
            else{
                if('A'<=str[i] && str[i]<='Z'){
                    lastCapital.push(i);
                }
                else{
                    lastSmall.push(i);
                }
            }
        }
        for(int i=0;i<tmp.size();i++){
            if(tmp[i]!='B' && tmp[i]!='b' && tmp[i]!='0'){
                ans+=tmp[i];
            }
        }
        cout<<ans<<endline;
    }
    return 0;
}
