#include<bits/stdc++.h>
#define ll long long int
#define u int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;
const int mx=1010;
char input[mx][mx];
int H,W;
int cnt=0;
void solve(int x,int y){
    if(x==H && y==W ){
        cnt=(cnt%mod)+1;
        //cout<<cnt<<"................"<<x<<" "<<y<<endline;
        return;
    }
    //cout<<x<<" "<<y<<" "<<endline;
    if(y+1<=W && input[x][y+1]!='#')solve(x,y+1);
    if(x+1<=H && input[x+1][y]!='#')solve(x+1,y);
}
int main(){
    fast_cin();
    cin>>H>>W;
    for(int i=1;i<=H;i++){
        for(int j=1;j<=W;j++){
            cin>>input[i][j];
        }
    }
    solve(1,1);
    cout<<cnt%mod<<endline;
    return 0;
}




