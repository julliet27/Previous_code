#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,ans="";
    int count=0;
    cin>>s;
    if(islower(s[0])){
        ans+=toupper(s[0]);
    }
    else if(isupper(s[0])){
        ans+=tolower(s[0]);
    }
    for(int i=1;i<s.size();i++){
        if( isupper(s[i]) ){
            ans+=tolower(s[i]);
            count++;
        }
    }
    if (count+1==s.size()){
        cout<<ans<<"\n";
    }
    else{
        cout<<s<<"\n";
    }
    return 0;
}