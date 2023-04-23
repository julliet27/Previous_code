#include<bits/stdc++.h>
using namespace std;
void solve(vector <int> &vec){
    for(int j=vec.size()-1;j>=0;j--){
            if(vec[j]<=j+1){
                cout<<j+2<<endl;
                return;
            }
        }
        cout<<1<<endl;
}
int main(){
    int t,n,a;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        int sum=1;
        vector<int>vec;
        for(int j=0;j<n;j++){
            cin>>a;
            vec.push_back(a);
        }
        sort(vec.begin(),vec.end());
        solve(vec);
    }
    return 0;
}
