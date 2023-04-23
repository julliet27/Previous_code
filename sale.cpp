#include <bits/stdc++.h> 
using namespace std;
int main(){
    int n,m,a,sum=0,count=0;
    vector<int>vec;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>a;
        vec.push_back(a);
    }
    sort(vec.begin(),vec.end());
    for(int i=0;i<vec.size();i++){
        if (vec[i]<0) {
            if(count<m){
                sum+=vec[i];
            }
            count+=1;
        }
    }
    cout<< sum*(-1)<<"\n";
    
    return 0;
}
