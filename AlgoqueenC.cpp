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
        int N;cin>>N;
        N++;
        int cnt=0;
        stack<int>stk;
        while(N--){
            string str;
            getline(cin,str);
            int read=0,undo=0;
            if(str.size()==3){
                read=(str[2]-'0');
                for(int i=0;i<read;i++){
                    stk.push(i);
                }
            }
            if(str.size()==1){
                undo=(str[0]-'0');
                for(int i=0;i<undo;i++){
                    stk.pop();
                }
            }
            int len=stk.size();
            cnt=max(cnt,len);

        }
        cout<<cnt<<endline;
    }
    return 0;
}

