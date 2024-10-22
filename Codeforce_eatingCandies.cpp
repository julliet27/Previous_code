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
		int n;cin>>n;
		vector<int>vec(n,0);
		for(int i=0;i<n;i++) cin>>vec[i];
		int left=0,right=n-1;
		int alice=vec[0],bob=vec[n-1];
		int ans=0;
		while(left<right){
			if(alice==bob){
				//cout<<t<<" "<<alice<<":"<<a<<" "<<bob<<":"<<b<<endline;
				ans=max(ans,left+1+n-right);
			}
			if(alice<=bob){
				left++;
				alice+=vec[left];
				
			}
			else{
				right--;
				bob+=vec[right];
				
			}
			
			
		}
		cout<<ans<<endline;
		
		
	}
    return 0;
}

