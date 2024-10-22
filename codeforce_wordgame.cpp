#include<bits/stdc++.h>
#define ll long long int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;

/// SOlVE
void solve(){
	int n;cin>>n;
	map<string,int>mp;
	string arr[3][n];
	for(int i=0;i<3;i++){
		for(int j=0;j<n;j++){
			string tm;cin>>tm;
			arr[i][j]=tm;
			mp[tm]++;
		}
	}
	int a=0,b=0,c=0;
	for(int j=0;j<n;j++){
		string tm=arr[0][j];
		if(mp[tm]==1) a+=3;
		else if(mp[tm]==2) a+=1;	
	}
	for(int j=0;j<n;j++){
		string tm=arr[1][j];
		if(mp[tm]==1) b+=3;
		else if(mp[tm]==2) b+=1;	
	}
	for(int j=0;j<n;j++){
		string tm=arr[2][j];
		if(mp[tm]==1) c+=3;
		else if(mp[tm]==2) c+=1;	
	}
	cout<<a<<" "<<b<<" "<<c<<endline;
	
	
}

/// MAIN
int main() {
	int t;cin>>t;
	while( t-- ) { solve();}
    return 0;
}
