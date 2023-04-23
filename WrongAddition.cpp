#include <bits/stdc++.h>
using namespace std;
void solve(vector<int>ga,vector<int>gb,int b){
    int sizeA=ga.size()-1;
    int sizeB=gb.size();
    int ans=0,power=1;
    for(int i=0;i<sizeB;i++){
        if(ga[i]<gb[i]){
            ans+=power*10+10+gb[i]-ga[i];
            i++;
        }
        else{
            ans+=power*10+gb[i]-ga[i];
        }
        power++;
    }
    cout<<ans<<"\n";
    // if(ans>b){
    //     // return -1;
    // }
    // else{
    //     return ans;
    // }

}
void vec(int a,int b){
    vector<int>ga;
    vector<int>gb;
    while(a!=0){
        int c=a%10;
        ga.push_back(c);
        a/=10;
    }
    while(b!=0){
        int d=b%10;
        gb.push_back(d);
        b/=10;
    }
    // cout<<solve(ga,gb,b)<<"\n";
    solve(ga,gb,b);
}
int main(){
    int t,a,b;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>a>>b;
        vec(a,b);
    }
}