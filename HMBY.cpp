#include <bits/stdc++.h> 
using namespace std;
int solve(vector <int>&g,int W){
    int count=0;
    int arr[5]={2,4,8,16,32};
    vector<int>vec;
    for (int i=0;i<5;i++){
        vec.push_back(W/arr[i]);
    }
    


    
    return 0;
}
int main(){
    int A,B,C,D,E,W;
    cin>>A>>B>>C>>D>>E>>W;
    if (B>0){
        A+=B*2;
        B-=B;
    }
    if (C>0){
        B+=C*2;
        C-=C;
    }
    if (D>0){
        C+=D*2;
        D-D;
    }
    if (E>0){
        D+=E*2;
        E-=E;
    }
    vector<int>g;
    g.push_back(A);
    g.push_back(B);
    g.push_back(C);
    g.push_back(D);
    g.push_back(E);
    
    solve(g,W);
    return 0;
}