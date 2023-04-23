# include <bits/stdc++.h>
using namespace std;
int main(){
    int T,N,K,a;
    cin>>T;
    for(int i=0;i<T;i++){
        cin>>N>>K;
        vector<int>A;
        for(int j=0;j<N;j++){
            cin>>a;
            A.push_back(a);
        }
        if(K+1>=N){
            cout<<*max_element( A.begin() , A.end())<<"\n";
        }
        else{
            for(int k=0;k<K;k++){
                int min=min_element(A.begin(),A.end())-A.begin();
                A[min]=A[min+1];
            }
            cout<<*min_element( A.begin() , A.end())<<"\n";
        }
    }
    return 0;
}