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
        int a,b,c;cin>>a>>b>>c;
        if(a==b && b==c && c==a){
            cout<<1<<" "<<1<<" "<<1<<endline;
        }
        else{
            if(a>b && a>c){
                cout<<1<<" "<<0<<" "<<0<<endline;
            }
            else if(a<b && a<c && b==c){
                cout<<0<<" "<<1<<" "<<1<<endline;
            }
            else if(b<a && b<c && a==c){
                cout<<1<<" "<<0<<" "<<1<<endline;
            }
            else if(c<b && c<a && b==a){
                cout<<1<<" "<<1<<" "<<0<<endline;
            }
            else if(b>a && b>c){
                cout<<0<<" "<<1<<" "<<0<<endline;
            }
            else{
                cout<<0<<" "<<0<<" "<<1<<endline;
            }
        }
    }
    return 0;
}


