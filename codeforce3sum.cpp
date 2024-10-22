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
string solve(vector<vector<int>>&vec1){
	int n;cin>>n;
	vector<int>vec(n,0);
	unordered_map<int,int>mp;
	for(int i=0;i<n;i++) cin>>vec[i];
	for(int i=0;i<n;i++){ mp[vec[i]%10]++;}
	
	for(int i=0;i<vec1.size();i++){
		int a=vec1[i][0],b=vec1[i][1],c=vec1[i][2];
		if(mp[a] ){
			mp[a]--;
			if(mp[b]){
				mp[b]--;
				if(mp[c]){
					
					return "YES";
					
				}
				mp[b]++;
			}
			mp[a]++;
			
		}
	}
	return "NO";
}

/// MAIN
int main() {
	int t;cin>>t;
	vector<vector<int>>vec;
	for(int i=0;i<=9;i++){
		for(int j=0;j<=9;j++){
			for(int k=0;k<=9;k++){
				if((i+j+k)%10==3) {
					vec.push_back({i,j,k});
				}
			}
	
		}
	}
	while(t--){
		cout<<solve(vec)<<endline;
	}

    return 0;
}
