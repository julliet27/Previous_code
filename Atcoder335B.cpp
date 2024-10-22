#include<bits/stdc++.h>
#define ll long long int
#define u int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;
int main(){
    fast_cin();
    int n;cin>>n;
    for(int ii=0;ii<=n;ii++){
        for(int jj=0;jj<=n;jj++){
            for(int kk=0;kk<=n;kk++){
                if(ii+jj+kk>n)continue;
                cout<<ii<<" "<<jj<<" "<<kk<<" "<<endline;
            }
        }
    }
    return 0;
}


