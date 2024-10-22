#include<bits/stdc++.h>
#define ll long long int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;
vector<int> bit(int num){
	vector<int>bit_vec;
	for(int i=0;i<32;i++){
		if((num>>i) & 1) bit_vec.push_back(1);
		else bit_vec.push_back(0);
		
	}
	return bit_vec;
}
void solve(){
	ll n;cin>>n;
	vector<int> bit_vec=bit(n);
	for(int i=0;i+1<32;i++){
		if(bit_vec[i]==1 && bit_vec[i+1]==1){
			bit_vec[i]=-1;
			while(i+1<32 && bit_vec[i+1]==1){
				bit_vec[i+1]=0;
				i++;
			}
			bit_vec[i+1]=1;
		
		}
	}
	cout<<32<<endline;
	for(int i:bit_vec) cout<<i<<" ";
	cout<<endline;
}
int main() {
	int t;cin>>t;
	
	while(t--){
		solve();
	}
	
    return 0;
}
