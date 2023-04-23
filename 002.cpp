#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    vector<int>vec;
    for(int i=0;i<t;i++){
        int n;cin>>n;
        vec.push_back(n);
    }
    sort(vec.begin(),vec.end());
    int min=vec[0],flag=0;
    for(int j=1;j<vec.size();j++){
        if(min<vec[j]){
            cout<<vec[j]<<"\n";
            flag=1;
            j=vec.size();
        }
    }
    if(flag==0){
        cout<<"NO"<<"\n";
    }
    return 0;
}