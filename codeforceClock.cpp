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
void solve(map<int,int>&mp){
	string str; int n; cin>>str>>n;
	int cnt=0;
	int mintues=((str[0]-'0')*10+(str[1]-'0'))*60+((str[3]-'0')*10+(str[4]-'0'));
	int x=mintues;
	while(x<=2879){
		if(mp[x]) cnt++;
		x=x+n;
		x=x%1440;
		if(mintues==x){
			break;
		}
	
	}
	cout<<cnt<<endline;
	
}

/// MAIN
int main() {
	int t;cin>>t;
	
	map<int,int>mp;
	
	mp[0]=1;
	int mintues=0;
	for(int i=1;i<24;i++){
		string str=to_string(i);
		if(0<=i && i<=9) str='0'+str;
		mintues+=60;
		
		for(int j=1;j<60;j++){
			string str1=to_string(j);
			if(0<=j && j<=9) str1='0'+str1;
			string tmp=str1;
			reverse(str1.begin(),str1.end());
			if(str==str1){  mp[mintues+j]=1;}
			
		}
		
	}
	
	while(t--){
		solve(mp);
	}

    return 0;
}
