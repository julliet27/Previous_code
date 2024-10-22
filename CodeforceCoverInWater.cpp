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
       string str;cin>>str;
       int cnt=0;
       for(int i=0;i<n;i++){
            if(str[i]=='.'){
                cnt++;
            }
       }
       bool flag=false;
       for(int i=0;i<n-2;i++){
         if(str[i]=='.' && str[i+2]=='.' && str[i+1]=='.'){
            flag=true;
            break;
         }
       }
       if(flag){
            cout<<2<<endline;
       }
       else cout<<cnt<<endline;

    }
    return 0;
}

