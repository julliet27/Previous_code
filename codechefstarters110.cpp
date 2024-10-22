#include<bits/stdc++.h>
#define ll long long int
#define u int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;
int main(){
    fast_cin();
    int t; cin>>t;
    while(t--){
        int A,B;cin>>A>>B;
        int tmA=A,tmB=B;
        int cnt1=0,cnt2=0;
        while(A%B!=0 && A>=1 && B>=1){
            A++;
            B--;
            cnt1++;
        }
        while(tmA%tmB!=0 && tmA>=1 && tmB>=1){
            tmA--;
            tmB++;
            cnt2++;
        }
        cout<<min(cnt1,cnt2)<<endline;
    }
    return 0;
}

