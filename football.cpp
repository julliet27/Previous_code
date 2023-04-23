#include <bits/stdc++.h> 
using namespace std;
string check(string &a){
    int count=0;
    for (int i=0;i<a.size();i++){
        if (a[i]==a[i+1]){
            count++;
            if (count==6){
                return "YES";
                break;
            }

        }
        else{
            count=0;
        }
    }   
    return "NO";
}
int main(){
    string a;
    cin>>a;
    string res=check(a);
    cout<<res<<"\n";
}