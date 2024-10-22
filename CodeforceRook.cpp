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
        string str; cin>>str;
        vector<string>vec;
        string A="",B="";
        A+=str[0];B+=str[1];
        for(char c='1';c<='8';c++){
            if(A+c!=str){
                vec.push_back(A+c);
            }
        }
        for(char c='a';c<='h';c++){
            if(c+B!=str){
                vec.push_back(c+B);
            }
        }
        for(string st:vec){
            cout<<st<<endline;
        }
    }
    return 0;
}

