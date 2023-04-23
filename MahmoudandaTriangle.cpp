#include<bits/stdc++.h>
using namespace std;
void solve(vector <int>& vec){
    for (int i=0;i<vec.size()-2;i++){
        if(vec[i]+vec[i+1]>vec[i+2]){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}
int main(){
    int n,a;
    vector<int>vec;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        vec.push_back(a);
    }
    sort(vec.begin(),vec.end());
    solve(vec);
    return 0;
}