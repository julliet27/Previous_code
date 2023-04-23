#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    string a,b,c;
    cin>>n>>m;
    vector<pair<string,string>>vec;
    for(int i=0;i<m;i++){
        cin>>a>>b;
        if(a.size()>b.size()){
            vec.push_back(make_pair(b,a));
        }
        else{
            vec.push_back(make_pair(a,b));
        }
    }
    for(int i=0;i<n;i++){
        cin>>c;
        for(int j=0;j<vec.size();j++){
            if(vec[j].first==c || vec[j].second==c) {
                cout << vec[j].first<<" ";
            }
        }
    }

    return 0;
}