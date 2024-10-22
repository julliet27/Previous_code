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
	int n,m;cin>>n>>m;
	int cnt=0;
	string str,tmp="ABCDEFG";cin>>str;
	vector<int>arr(27,0);
	for(int i=0;i<n;i++){
		arr[str[i]-'A']++;
	}
	
	for(int i=0;i<7;i++){
		if(arr[tmp[i]-'A']>=m){
			cnt+=m;
		}
		else{
			cnt+=arr[tmp[i]-'A'];
		}
	}
	
	int ans=7*m-cnt;
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
