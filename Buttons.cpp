#include<bits/stdc++.h>
using namespace std;
int lcm(int a,int b){
    return a*b/__gcd(a,b);
}
void solve(){
    string s,t;
    cin>>s>>t;
    int a=s.length(),b=t.length();
    int l=lcm(a,b);
    string ans1,ans2;
    for(int i=0;i<l/a;i++){
        ans1+=s;
    }
    for(int i=0;i<l/b;i++){
        ans2+=t;
    }
    for(int i=0;i<ans1.length();i++){
        if(ans1[i]!=ans2[i]){
            cout<<"-1\n";
            return;
        }
    }
    cout<<ans1<<"\n";
}
int main (){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}