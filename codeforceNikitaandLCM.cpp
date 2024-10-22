#include<bits/stdc++.h>
#define ll long long int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;
const int mx=1e6+1;
vector<ll>prime;
//
//// ALL Prime Numbers
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
//
///// NUMBER BIT
//vector<int> bit(int num){
//	vector<int>bit_vec;
//	for(int i=0;i<32;i++){
//		if((num>>i) & 1) bit_vec.push_back(1);
//		else bit_vec.push_back(0);
//	}
//	return bit_vec;
//}
//void factorize(ll num,vector<ll>&se){
//	if(num%2==0){
//		se.push_back(2);
//		while(num%2==0 && num>0) num=num/2;
//	}
//	for(int i=1;i<prime.size();i++){
//		if(num%prime[i]==0){
//			se.push_back(prime[i]);
//			while(num%prime[i]==0 && num>0) num=num/prime[i];
//		}
//		if(num<=0) break;
//	
//	}
//	if(num>1) se.push_back(num);
//}
//
//int calc(int d,vector<pair<int, int>> &t) {
//    int LCM = 0, cnt = 0;
//    for (auto [j, c]: t) {
//        if (d % j == 0) {
//            if (LCM == 0) LCM = j;
//            else LCM = (LCM,j)/(__gcd(LCM,j));
//            cnt += c;
//        }
//    }
//    if (LCM != d) cnt = 0;
//    return cnt;
//}
///   LEAST COMMON DIVISOR
ll lcm(ll x,ll y){
	return (x*y)/__gcd(x,y);
}
///  SOlVE
void solve(){
	int n;cin>>n;
	vector<ll>vec(n,0);
	ll LCM=1; bool flag=false;
	for (int i=0;i<n;i++){ cin>>vec[i];} 
	int mx=*max_element(vec.begin(),vec.end());

	
	for(int i=0;i<n;i++){
		
		LCM=lcm(vec[i],LCM);
		if(LCM>mx){
			cout<<n<<endline;
			flag=true;
			break;
		}
	}
	
	if(!flag){
		map<ll, ll>dp,dp1,check;
		for(int i:vec) check[i]++;
		dp[1]=0;
		for(ll i=0;i<n;i++){
			dp1=dp;
			for( auto [x,y]: dp){
				ll val= lcm(x,vec[i]);
				dp1[val]=max(dp1[val],y+1);
			}
			dp=dp1;
		}
		ll ans=0;
		
		for(auto [x,y]:dp){
			if(!check[x]){
				ans=max(ans,y);
			}
		}
		cout<<ans<<endline;
	}
	
	
}

/// MAIN
int main() {
	int t;cin>>t;
	
	while(t--){
		solve();
	}

    return 0;
}
