#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    char c;
    string S;
    vector<string>vec;
    map<int,string>MAP;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>c;
        S+=c;
    }
    for(int i=0;i<n-1;i++){
        string sub_S="";
        sub_S+=S[i];
        sub_S+=S[i+1];
        vec.push_back(sub_S);
    }
    for(int i=0;i<vec.size();i++){
        int count=0;
        for(int j=0;j<vec.size();j++){
            if (vec[i]==vec[j]){
                count++;
            }
        }
        MAP.insert(pair<int,string>(count,vec[i]));
    }
    auto pr=max_element(MAP.begin(),MAP.end());
    cout<<pr->second<<"\n";
    return 0;
}