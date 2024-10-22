#include<bits/stdc++.h>
#define ll long long int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;

int main() {
	int n,m;cin>>n>>m;
	int arr[n+2][m+2];
	ll cnt=0;
	for(int i=0;i<n+2;i++){
		for(int j=0;j<m+2;j++){
			arr[i][j]=0;
			
		}
		
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>arr[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(arr[i][j]==2){
				if(arr[i-1][j]==1 || arr[i+1][j]==1 || arr[i][j-1]==1||arr[i][j+1]==1) cnt++;
				if(arr[i-1][j]==1)arr[i][j]++;
				if(arr[i+1][j]==1)arr[i][j]++;
				if(arr[i][j-1]==1)arr[i][j]++;
				if(arr[i][j+1]==1)arr[i][j]++;
			}
		}
	}
	bool flag=false;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if( arr[i][j]==1){
				 flag=true;
				 break;
			}
		}
	}
	if(flag) cout<<-1<<endline;
	else cout<< cnt<<endline;
    return 0;
}
