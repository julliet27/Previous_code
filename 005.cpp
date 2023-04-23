#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,count=0;cin>>n;
    vector<int>vec;
    for(int i=0;i<n;i++){
        long long int a;cin>>a;
        vec.push_back(a);
    }
    sort(vec.begin(),vec.end());
    for(int i=0;i<vec.size()/2;i++){
        if(vec[i]<vec[vec.size()-i-1]){
            count++;
        }
    }
    cout<<count<<"\n";
    return 0;
}