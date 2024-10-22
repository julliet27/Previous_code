#include<bits/stdc++.h>
#define ll long long int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;

int main() {
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		vector<int>vec(n,0);
		for(int i=0;i<n;i++){
			cin>>vec[i];
		}
		int cnt=0;
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				if(vec[i]>=vec[j]) cnt++;
			}
		}
		cout<<cnt<<endline;
	}
    return 0;
}
