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
        stack<char>stk,store;
        for(int i=0;i<n;i++){
            stk.push(str[i]);
        }
        while(!stk.empty()){
            if(stk.size()==1) break;
            char tp=stk.top();stk.pop();
            char sec_tp=stk.top();stk.pop();
            if(tp==sec_tp){
                store.push(tp);
                stk.push(sec_tp);
            }
            else{
                while(!store.empty()){
                    stk.push(store.top());
                    store.pop();
                }
            }
        }
    }
    return 0;
}

