#include<bits/stdc++.h>
using namespace std;
void solve(char C,string S){
    string temp_S="qwertyuiopasdfghjkl;zxcvbnm,./",ans;
    int size=S.size(),index=0;
    while (index<size){
        int idx=temp_S.find(S[index]);
        if (C=='R'){
            ans+=temp_S[idx-1];
        }
        else{
            ans+=temp_S[idx+1];
        }
        index++;  
    }
    cout<<ans<<"\n";
}
int main(){
    char C;
    string S;
    cin>>C>>S;
    solve(C,S);
    return 0;

}