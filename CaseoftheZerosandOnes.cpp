#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,count_0=0,count_1=0;
    char c;

    cin>>n;
    for(int i=0;i<n;i++){
        cin>>c;
        if (c=='1'){
            count_1++;
        }
        if(c=='0'){
            count_0++;
        }
    }
    if(count_1==count_0){
        cout<<n-(count_1+count_0)<<"\n";
    }
    else{
        if(count_1>count_0){
            cout<<n-(2*count_0);
        }
        else{
            cout<<n-(2*count_1);
        }
    }
    return 0;
}
