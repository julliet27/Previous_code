#include<bits/stdc++.h>
#define ll long long int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;

/// SOlVE
void solve(){
	int n;cin>>n;
	char arr[n][n];
	int visited[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			char a;cin>>a;
			arr[i][j]=a;
			visited[i][j]=0;
		}
	}
	int x=0,y=n-1,ans=0;
	for(int i=0;i<(n)/2;i++){
		
		for(int j=0;j<y;j++){
			int cnt1=0;
			if(!visited[x][x+j]) {cnt1+=arr[x][x+j]-'0';visited[x][x+j]=1;}
			if(!visited[x+j][y]) {cnt1+=arr[x+j][y]-'0';visited[x+j][y]=1;}
			if(!visited[y][y-j]) {cnt1+=arr[y][y-j]-'0';visited[y][y-j]=1;}
			if(!visited[y-j][x]){cnt1+=arr[y-j][x]-'0';visited[y-j][x]=1;}
			if(cnt1!=4 && cnt1!=0){
				int one=cnt1,zero=4-cnt1;
				ans+=min(one,zero);
			}
		}
		
		y--;
		x++;
	}
	
	cout<<ans<<endline;
	
}

/// MAIN
int main() {
	int t;cin>>t;
	while(t--){solve();}
    return 0;
}

//adcba
//befed
//cfgfc
//defeb
//abcda

//acba
//bddc
//cddb
//abca

