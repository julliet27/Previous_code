#include <bits/stdc++.h> 
using namespace std;
int main(){
    int t,n,count1=0,count0=0;
    char s;
    char arr[n];
    for(int i=0;i<t;i++){
        cin>>n;
        for(int j=0;j<n;i++){
            cin>>s;
            arr[j]=s;
            if(s=='1'){
                count1++;
            }
            else{
                count0++;
            }
        }
        if(n==1){
            cout<<"YES"<<"\n";
        }
        else if(n==2){
            if(count1!=2 || count0!=2){
                cout<<"YES"<<"\n";
            }
        }
        else{
            cout<<"NO"<<"\n";
        }

    }
    return 0;
}