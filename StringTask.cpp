#include<bits/stdc++.h>
using namespace std;
bool vowel_checker(char S){
    char arr[]={'a','e','i','o','u','y','A','E','I','O','U','Y'};
    for(int i=0;i<12;i++){
        if (arr[i]==S){
            return true;
        }
    }
    return false;
}
int main(){
    string S,ans;
    cin>>S;
    bool flag;
    for(int i=0;i<S.size();i++){
        flag=vowel_checker(S[i]);
        if (flag==false){
            ans+='.';
            if ((int)('A')<=(int)(S[i]) && (int)(S[i])<=(int)('Z')){
                ans+=(char)(((int)(S[i]))+32);
            }
            else{
                ans+=S[i];
            }
        }
    }
    cout<<ans;
    return 0;
}