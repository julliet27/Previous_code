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
		ll n,c,d;cin>>n>>c>>d;
		vector<ll>vec(n*n,0),acc(n*n,0);
		
		for(int i=0;i<n*n;i++){cin>>vec[i];}
		ll mn=*min_element(vec.begin(),vec.end());
		sort(vec.begin(),vec.end());
		acc[0]=vec[0];
		for(int i=1;i<n;i++) acc[i]=acc[i-1]+c;
		
		for(int i=0;i<n;i++){
			for(int j=1;j<n;j++){
				acc[i*n+j]=acc[i*n]+d;
			}
		}
		for(int i:acc){
			cout<<i<<" ";
		}
		cout<<endline;
		sort(acc.begin(),acc.end());
		if(vec!=acc) cout<<"NO"<<endline;
		else cout<<"YES"<<endline;
		
    }
    return 0;
}

