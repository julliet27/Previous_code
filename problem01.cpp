#include <bits/stdc++.h> 
using namespace std;
int main(){
    int T,N;
    vector<int>A;
    cin>>T;
    for(int i=0;i<T;i++){
        cin>>N;
        int a;
        for (int j=0;j<N;j++){
            cin>>a;
            A.push_back(a);
        }
        sort(A.begin(),A.end());
        int sum=0;
        for(int i=0;i<A.size();i++){
            sum+=A[i];
        }
        cout<<sum<<"\n";
        
    }
    return 0;
}