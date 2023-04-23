#include <bits/stdc++.h> 
using namespace std;
int* makearr(long long int n,long long int k){
   long long int* arr[n]; 
   for(long long int i=1,k=0;i<n;i+=2){
       arr[k]=i;
       k++;
   }
   return arr; 
}
int main(){
    long long int n,k;
    cin>>n>>k;
    int* arr=makearr(n,k);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}