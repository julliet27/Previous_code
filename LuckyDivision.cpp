#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,count=0;
    cin>>n;
    int arr[]={4,7,47,74,444,447,474,477,744,747,774,777};
    for(int i=0;i<12;i++){
        if(arr[i]==n || n%arr[i]==0){
            count++;
            break;
        }
    }
    if(count>0){
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
    }
    return 0;
}