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
		int n,m;cin>>n>>m;
		char arr[n][m];
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>arr[i][j];
			}
		}
		for(int i=0;i<m;i++){
			for(int j=n-1;j>=0;j--){
				int k=j;
				if(arr[k][i]=='*'){
					while(arr[k+1][i]=='.' && k+1<n){
						char tmp=arr[k+1][i];
						arr[k+1][i]=arr[k][i];
						arr[k][i]=tmp;
						k++;
					}
				}
				
				
			}
			
			
		}
		
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cout<<arr[i][j];
			}
			cout<<endline;
		}
		
		
		
	}
    return 0;
}

