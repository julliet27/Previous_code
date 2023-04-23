#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string s;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s;
        int count_0=0,count_1=0;
        for(int j=0;j<s.size();j++){
            if (s[j] == '0'){
                count_0++;
            }
            else{
                count_1++;
            }
        }
        if(count_0==count_1){
            if (count_0%2!=0){
                cout<<"DA"<<"\n";
            }
            else{
                cout<<"NET"<<"\n";
            }
        }
        else{
            if(count_0 ==0 || count_1==0){
                cout<<"NET"<<"\n";
            }
            else if(count_0<count_1){
                if (count_0%2!=0){
                    cout<<"DA"<<"\n";
                }
                else{
                    cout<<"NET"<<"\n";
                }
            }
            else{
                if (count_1%2!=0){
                    cout<<"DA"<<"\n";
                }
                else{
                    cout<<"NET"<<"\n";
                }
            }
        }
    }
    return 0;
}