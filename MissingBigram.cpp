#include <bits/stdc++.h> 
using namespace std;
void solve(string arr[],int n){
    string ans='';
    for (int i=0;i<n;i++){
        if(n==1){
            ans=ans+arr[i]+"a";
        }
        if(i==0){
            ans=ans+arr[i];
        }
        else if(i>0){
            if(arr[i][0]==arr[i-1][1]){
                ans=ans+arr[i][1];
            }
            else{
                ans=ans+arr[i][0];
            }
        }
    }
    cout<<ans<<"\n";
}
int main(){
    int t,n;
    string a;
    cin>>t;
    for (int i=0;i<t;i++){
        cin>>n;
        string arr[n-2];
        for(int j=0;j<n-2;j++){
            cin>>a;
            arr[j]=n;
        }
        solve(arr,n-2);
    }
    return 0;
}