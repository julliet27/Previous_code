#include <bits/stdc++.h> 
using namespace std;
int main(){
    int A,N;
    cin>>N;
    set<int>s;
    for(int i=0;i<N;i++){
        cin>>A;
        s.insert(A);
    }
    vector<int>vec(s.begin(),s.end());
    if(vec.size()==1){
        cout<<0<<"\n";
    }
    else{
        int min=vec[0];
        for (int i=1;i<vec[vec.size()-1];i++){
            if(vec.size()==1){
                cout<<0<<"\n";
                break;
            }
            if((min+1)!=vec[i]){
                cout<<min+1<<"\n";
                break;
            }
            min=vec[i];
        }
    }

    return 0;
}