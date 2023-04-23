#include <bits/stdc++.h> 
using namespace std;
int main(){
    int k2,k3,k5,k6,min,sum=0;
    cin>>k2>>k3>>k5>>k6;
    vector<int>g;
    g.push_back(k2);
    g.push_back(k5);
    g.push_back(k6);
    min=*min_element(g.begin(),g.end());
    if (min>0){
        sum+=256*min;
    }
    if (k2-min>0 && k3>0){
        if (k2-min>k3){
            sum+=32*k3;
        }
        else{
            sum+=32*(k2-min);
        }
    }
    cout<<sum;
    return 0;
}