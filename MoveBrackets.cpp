#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,s;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>s;
        char arr[s];
        stack<char>Stack;
        int count=0;
        for(int j=0;j<s;j++){
            cin>>arr[j];
            if(arr[j]==')'){
                if (Stack.empty()){
                    count++;
                }
                else{
                    Stack.pop();
                }
            }
            else{
                 Stack.push(arr[j]);
            }
        }
        cout<<count<<endl;
    }
    return 0;
}