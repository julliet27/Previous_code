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
        if(str[str.size()-1]=='A') cout<<'A'<<endline;
        else cout<<'B'<<endline;
    }

    return 0;
}

