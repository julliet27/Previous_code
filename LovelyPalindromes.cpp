#include<bits/stdc++.h>
using namespace std;
int main(){
    string n,temp;
    cin>>n;
    temp=n;
    reverse(temp.begin(),temp.end());
    cout<<n+temp<<endl;
    return 0;
}