#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
using ll=long long int;
int main(){
    string n;
    vector<char>arr{'A','C','G','T'};
    ll max=-1;
    cin>>n;
    for(int i=0;i<4;i++){
        int temp=count(n.begin(),n.end(),arr[i]);
        if(max<temp){
            max=temp;
        }
    }
    cout<<max<<"\n";
    return 0;
}
