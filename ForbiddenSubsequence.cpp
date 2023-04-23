#include <bits/stdc++.h> 
using namespace std;
void solve(string S,string T,int A,int B,int C){
    string ans;
    if(T!="abc"){
        cout<<S<<"\n";
    }
    else if(A==0 || B==0 || C==0){
        cout<<S<<"\n";
    }
    else{
        int count=0;
        int a=S.size();
        for(int i=0;i<a;i++){
            if(S[i]=='b' && S[i-1]=='a'){
                for(int j=0;j<C;j++){
                    ans.push_back('c');
                }
                ans.push_back('b');
            }
            else if(S[i]=='c'){
               if(S[S.size()-1]=='c'){i++;}
               else{
                   i+=C;
                   ans.push_back(S[i]);
               }
            }
            else{
                ans.push_back(S[i]);
            }
        }
        cout<<ans<<"\n";
    }
}
void makelist(string S,string T){
    vector<int>g;
    int countA=0,countB=0,countC=0;
    for(int i=0;i<S.size();i++){
        if(S[i]=='a'){
            countA++;
        }
        if(S[i]=='b'){
            countB++;
        }
        if(S[i]=='c'){
            countC++;
        }
    }
    solve(S,T,countA,countB,countC);
}
int main(){
    int t;
    string S,T;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>S>>T;
        sort(S.begin(),S.end());
        makelist(S,T);
    }
    return 0;
}