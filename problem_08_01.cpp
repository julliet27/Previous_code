#include <bits/stdc++.h> 
using namespace std;
int main(){
    int T,N;
    cin>>T;
    for(int i=0;i<T;i++){
        cin>>N;
        int a;
        int sum=0;
        vector<int>A;
        for (int j=0;j<N;j++){
            cin>>a;
            A.push_back(a);
        }
        sort(A.begin(),A.end(),greater<int>());
        for(int j=0;j<N-1;j++){
            sum+=A[j];
        }
        cout<<sum<<"\n";
        
    }
    return 0;
}