#include<bits/stdc++.h>
#define ll long long int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;

/// SOlVE
void solve(){
	int n;cin>>n;
	string str;cin>>str;
	ll sum=0;
	vector<ll>vec(n,0);
	
	
	for(int i=0;i<n;i++){
		
		if(str[i]=='L'){ 
			sum+=i;
			vec[i]=(n-i-1)-i;
			
		}
		else{ 
			sum+=(n-1-i); 
			vec[i]=i-(n-i-1);
		}
		
	}
	sort(vec.rbegin(),vec.rend());
	
	for(int i=0;i<n;i++){
		if(vec[i]>0) sum+=vec[i];
		cout<<sum<<" ";
	}
	cout<<endline;
}

/// MAIN
int main() {
	int t;cin>>t;
	while(t--) { solve(); }
    return 0;
}
