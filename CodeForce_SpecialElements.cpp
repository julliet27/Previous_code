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
		unordered_map<ll, int>mp;
		for(int i=0;i<n;i++) { 
			cin>>vec[i];
			mp[vec[i]]++;
		}
		int cnt=0;
		for(int i=0;i<n;i++){
			int tmp=vec[i];
			for(int j=i+1;j<n;j++){
				tmp+=vec[j];
				if(tmp<=n){
					 //cout<<tmp<<" ";
					 cnt+=mp[tmp];
					 mp[tmp]=0;
				}
			}
		}
		//cout<<endline;
		cout<<cnt<<endline;
		
		
    }
    return 0;
}

