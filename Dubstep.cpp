#include <bits/stdc++.h> 
using namespace std;
int main(){
    string str;
    cin>>str;
    string delim = "WUB";
    int pos = 0;  
    string token1;
    while (str.size()!=0){ 
        int pos=str.find(delim); 
        token1 =str.substr(0, pos);
        if(token1.size()!=0){
            cout << token1<<" ";  
        }
        str.erase(0, pos + delim.length());
        if(pos<0){
            break;
        }  
    }  
    return 0;
}