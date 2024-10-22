#include<bits/stdc++.h>
#define ll long long int
#define u int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;
int main(){
    fast_cin();
    int cnt=0;
    //code 1
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            cnt++;
        }
    }
    cout<<cnt<<endline;

    // code2
    for(int i=0;i<10;i++){
        for(int j=0;j<10;i++){
            cnt++;
        }
    }
    cout<<cnt<<endline;
    return 0;
}
