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
		vector<int>vec(n+1,0);
		for(int i=1;i<=n;i++) cin>>vec[i];
		int mid=(n+1)/2;
		sort(vec.begin(),vec.end());
		vec[mid]++;
		int cnt=1;
		for(int i=mid+1;i<=n;i++){
			if(vec[i-1]>vec[i]){
				cnt++;
				vec[i]++;
			}
		}
		cout<<cnt<<endline;
    }
    return 0;
}

