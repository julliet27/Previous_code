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
        int a,b;cin>>a>>b;
        if(a==b){
            cout<<"Bob"<<endline;
        }
        else if(a<b){
            cout<<"Alice"<<endline;
        }
        else{
            cout<<"Bob"<<endline;
        }
    }
    return 0;
}

