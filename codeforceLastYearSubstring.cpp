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
        int n;cin>>n;
        string str;cin>>str;
        bool flag=false;
        if(str[0]=='2' && str[n-3]=='0' && str[n-2]=='2' && str[n-1]=='0'){
            cout<<"YES"<<endline;
        }
        else if(str[0]=='2' && str[1]=='0' && str[n-2]=='2' && str[n-1]=='0'){
            cout<<"YES"<<endline;
        }
        else if(str[0]=='2' && str[1]=='0' && str[2]=='2' && str[3]=='0'){
            cout<<"YES"<<endline;
        }
        else if(str[n-4]=='2' && str[n-3]=='0' && str[n-2]=='2' && str[n-1]=='0'){
            cout<<"YES"<<endline;
        }
        else if(str[0]=='2' && str[1]=='0' && str[2]=='2' && str[n-1]=='0'){
            cout<<"YES"<<endline;
        }
        else{
            cout<<"NO"<<endline;
        }
    }
    return 0;
}


