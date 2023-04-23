#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int t,n;
    int count=0;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        if(n%2!=0 && n!=2){
            count++;
        }
        
    }
    return 0;
}