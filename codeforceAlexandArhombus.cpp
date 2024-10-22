#include<bits/stdc++.h>
#define ll long long int
#define u int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;
int main(){
    fast_cin();
    vector<int>vec(105,0);
    vec[1]=1;
    for(int i=2;i<=100;i++){
        vec[i]=vec[i-1]+(i-1)*4;
    }
    int num;cin>>num;
    cout<<vec[num]<<endline;
    return 0;
}

