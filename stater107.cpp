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
        int n; cin>>n;
        string str; cin>>str;
        if(n==1){ cout<<"Yes"<<endline;

        }
        else if(n==2){
            if(str[0]==str[1])cout<<"Yes"<<endline;
            else cout<<"No"<<endline;
        }
        else {
            for(int i=1;i<n;i++){
                if(str[i]==str[i-1]){
                    str[i]='2';
                    str[i-1]='2';
                }
            }
            unordered_map<char,int>mp;
            for(int i=0;i<n;i++){
                mp[str[i]]++;
            }

            if(mp['1']==0) cout<<"Yes"<<endline;
            else if(mp['0']==0) cout<<"Yes"<<endline;
            else cout<<"No"<<endline;
        }


    }

    return 0;
}

