#include <bits/stdc++.h> 
using namespace std;
void solve(int arr[]){
    int arr1[3],a3=0;
    a3=arr[6]-(arr[0]+arr[1]);
    arr1[0]=arr[0];
    arr1[1]=arr[1];
    arr1[2]=a3;
    for(int i=0;i<=2;i++){
        cout<<arr1[i]<<" ";
    }
    cout<<"\n";

}
int main(){
    long long int t,b;
    int arr[7];
    cin>>t;
    for (int i=0;i<t;i++){
        for(int j=0;j<7;j++){
            cin>>b;
            arr[j]=b;
        }
        solve(arr);
    }
    return 0;
}