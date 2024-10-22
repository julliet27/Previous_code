#include<bits/stdc++.h>
#define ll long long
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;
int main(){
    fast_cin();
    ll int arr[46];
    memset(arr,0,sizeof(arr));
    arr[1]=2;arr[2]=2;
    for(int i=3;i<46;i++){
        arr[i]=arr[i-1]+arr[i-2];
    }
    int n;cin>>n;
    cout<<arr[n]<<endline;
    return 0;
}

