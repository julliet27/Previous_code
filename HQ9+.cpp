#include <bits/stdc++.h> 
using namespace std;
int main(){
    string a;
    int count=0;
    cin>>a;
    for(int i=0;i<a.size();i++){
        if(a[i]=='H' || a[i]=='Q' || a[i]=='9'){
            count++;
        }
    }
    if(count>0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}