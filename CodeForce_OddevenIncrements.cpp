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
		int odd=0,even=0;
		for(int i=0;i<n;i+=2){
			if(vec[i]%2==0) even++;
			else odd++;
		}
		if(even>0 && odd>0)cout<<"NO"<<endline;
		else{
			even=0;odd=0;
			for(int i=1;i<n;i+=2){
				if(vec[i]%2==0) even++;
				else odd++;
			}
			if(even>0 && odd>0)cout<<"NO"<<endline;
			else cout<<"YES"<<endline;
		}
	}
    return 0;
}

