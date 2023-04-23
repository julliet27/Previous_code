#include<bits/stdc++.h>
using namespace std;

int main(){
    string A,B="hello";
    cin>>A;
    int arr[B.size()+1][A.size()+1];
    for(int i=0;i<=B.size();i++){
        for(int j=0;j<=A.size();j++){
            arr[i][j]=0;
        }
    }
    for(int i=0;i<=B.size();i++){
        for(int j=0;j<=A.size();j++){
            if(i==0 || j==0){
                arr[i][j]=0;
            }
            else if (B[i-1]==A[j-1]){
                arr[i][j]=arr[i-1][j-1]+1;
            }
            else{
                arr[i][j]=max(arr[i-1][j],arr[i][j-1]);
            }
        }
    }
    if (arr[B.size()][A.size()]==5){
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
    }
    return 0;
}