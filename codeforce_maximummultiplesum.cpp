#include<bits/stdc++.h>
#define ll long long int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;
const int mx=1e6+1;
vector<ll>prime;

////// ALL Prime Numbers
////void AllprimeNum(){
////	bool CheckIsPrime[mx];
////	
////	memset(CheckIsPrime, true, sizeof(CheckIsPrime));
////	for (int p = 2; p * p <= mx; p++) {
////		if (CheckIsPrime[p] == true) {
////			prime.push_back(p);
////			for (int i = p * p; i <= mx; i += p) {
////			   CheckIsPrime[i] = false; 
////			}
////		}
////	}
////}
/////// FACTORIZATION of NUMBER
////void factorize(){
////	for(int i=2;i<=1e6;i++){
////		 int index=0;
////		 if(prime_check[i]==1){
////			  int num=i; 
////			  while(num>1){
////				  if(num%prime[index]==0) {
////				  mp[i].push_back(prime[index]);
////				  }
////				 while(num%prime[index]==0 && num!=0){
////							   num/=prime[index];
////				 }
////				index++;
////			}
////		}
////	}
////}
/////// NUMBER BIT
////vector<int> bit(int num){
////	vector<int>bit_vec;
////	for(int i=0;i<32;i++){
////		if((num>>i) & 1) bit_vec.push_back(1);
////		else bit_vec.push_back(0);
////	}
////	return bit_vec;
////}

/// SOlVE
void solve(){
	int n;cin>>n;
	int sum=0,ans=0;
	for(int i=2;i<=n;i++){
		int x=i;int tmp=0;
		for(int j=1;j*x<=n;j++){
			
			tmp+=(j*x);
		}
		
		if(tmp>sum){
			ans=x;
			sum=tmp;
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
