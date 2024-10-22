#include<bits/stdc++.h>
#define ll long long int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;
const int mx=1e6+1;
vector<ll>prime;

// ALL Prime Numbers
//void AllprimeNum(){
//	bool CheckIsPrime[mx];
//	
//	memset(CheckIsPrime, true, sizeof(CheckIsPrime));
//	for (int p = 2; p * p <= mx; p++) {
//		if (CheckIsPrime[p] == true) {
//			prime.push_back(p);
//			for (int i = p * p; i <= mx; i += p) {
//			   CheckIsPrime[i] = false; 
//			}
//		}
//	}
//}
/// FACTORIZATION of NUMBER
//void factorize(){
//	for(int i=2;i<=1e6;i++){
//		 int index=0;
//		 if(prime_check[i]==1){
//			  int num=i; 
//			  while(num>1){
//				  if(num%prime[index]==0) {
//				  mp[i].push_back(prime[index]);
//				  }
//				 while(num%prime[index]==0 && num!=0){
//							   num/=prime[index];
//				 }
//				index++;
//			}
//		}
//	}
//}
/// NUMBER BIT
//vector<int> bit(int num){
//	vector<int>bit_vec;
//	for(int i=0;i<32;i++){
//		if((num>>i) & 1) bit_vec.push_back(1);
//		else bit_vec.push_back(0);
//	}
//	return bit_vec;
//}

/// SOlVE
void solve(){
	int n,f,k;cin>>n>>f>>k;
	vector<pair<int,int>>vec;
	vector<int>check(1000,-1);
	queue<pair<int,int>>q;
	int fav=0,favI=f-1;
	for(int i=0;i<n;i++ ){
		int a;cin>>a;
		if(f-1==i) fav=a;
		if(check[a]!=-1){ vec.push_back({a,i}); check[a]=i;}
		else{
			if(favI==i) vec.push_back({a,favI});
			else vec.push_back({a,-1});
		} 
	}
	
	sort(vec.rbegin(),vec.rend());
	string ans="YES"; 
	for(int i=k;i<n;i++ ){
		
		if(vec[i].first==fav && vec[i].second==favI){
			
			ans="NO";
			break;
		}
		if(vec[i].first==fav ){
			ans="MAYBE";
			
		}
		
	}
	
	
	cout<<ans<<endline;
}

/// MAIN
int main() {
	int t;cin>>t;
	
	while(t--){
		solve();
	}

    return 0;
}
