#include <bits/stdc++.h> 
using namespace std;
int solve(vector<int>g,int n){
    int sum1=0,count=0,sum2=0;
    for(int i=0;i<g.size()/2;i++){
        sum1+=g[i];
        sum2+=g[g.size()/2+i];
        if(sum1<sum2){
            count++;
        }

    }
    return count;
}
int main(){
    int n,a,sum;
    cin>>n;
    vector<int>g;
    for(int i=0;i<n;i++){
        cin>>a;
        g.push_back(a);
    }
    sort(g.begin(),g.end());
    cout<<solve(g,n)<<"\n";

}