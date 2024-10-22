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
        int ans=0;
        string str;cin>>str;
        set<string>S;
        sort(str.begin(),str.end());
        for(int i=0;i<n;i++){
            string tmp="";
            tmp+=str[i];
            S.insert(tmp);
            //cout<<tmp<<" ";
            for(int j=i+1;j<n;j++){
                tmp+=str[j];
                //cout<<tmp<<" ";
                S.insert(tmp);
            }
            //cout<<endline;
        }
        cout<<S.size()<<endline;

    }
}

