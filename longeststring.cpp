#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>chars(128);
    string name="lamia";
    for(int i=0;i<name.size();i++){
        char s=name[i];
        chars[s]++;
    }
    for(int i=0;i<chars.size();i++){
        if(chars[i]!=0){
            cout<<chars[i]<<" "<<i<<"\n";
        }
    }
}