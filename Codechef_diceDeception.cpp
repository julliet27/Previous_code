#include<bits/stdc++.h>
#define ll long long int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;

int main() {
	int t;cin>>t;
	while(t--){
		int n,k;cin>>n>>k;
		vector<int>vec(n,0);
		for(int i=0;i<n;i++){
			cin>>vec[i];
			
		}
		sort(vec.begin(),vec.end());
		for(int i=0;i<k;i++){
			if(vec[i]<=3){
				 vec[i]=7-vec[i];
			}
		}
		int sum=0;
		for(int i=0;i<n;i++){
			sum+=vec[i];
		}
		cout<<sum<<endline;
	}
    return 0;
}
