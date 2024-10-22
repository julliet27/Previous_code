#include<bits/stdc++.h>
#define ll long long int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;
int main(){
    fast_cin();
    int t;cin>>t;
    while(t--){
		int a,b;cin>>a>>b;
		int diff=a-b;
		if(diff>10) cout<<0<<endline;
		else{
			
			int cnt3=0,cnt2=0;
			int tmp3=a, tmp2=a;
			while((tmp3-b)<10){
				cnt3++;
				tmp3+=3;
			}
			while((tmp2-b)<10){
				cnt2++;
				tmp2+=2;
			}
			cout<<min(cnt3,cnt2)<<endline;
			
		}
    }
    return 0;
}

