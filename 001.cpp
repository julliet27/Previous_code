#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;cin>>t;
    for(long long int i=0;i<t;i++){
        long long int n;cin>>n;
        string num_string=to_string(n),temp_string;
        temp_string=num_string;
        reverse(temp_string.begin(),temp_string.end());
        if(num_string==temp_string){
            cout<<"Case "<<i+1<<": Yes"<<"\n";
        }
        else{
            cout<<"Case "<<i+1<<": No"<<"\n";
        }
    }
    return 0;
}
3
ko te kader molla
tui rajakar tui rajakar
tumi ke ami ke
garo chakma bangali
jalo re jalo
agun jalo
2
jalo re jalo
ko te kader molla
