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
        int N,V,X;cin>>N>>V>>X;
        int people=V*3;
        if(N<V*3) people=N;
        int remain=(V+people)*X+X;
        cout<<remain<<endline;
    }
    return 0;
}

