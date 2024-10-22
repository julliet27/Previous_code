#include<bits/stdc++.h>
#define ll long long int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;
const int nmax=1e5;
int arr[nmax];
int tree[nmax];
int mxID(int l,int r){
	
	int idx=0,mx=-2;
	
	for(int i=l;i<=r;i++){
		if(mx<arr[i]){
			idx=i;
			mx=arr[i];
		}
	}
	return idx;
}
void build(int id,int l,int r,int d){
	if(r<l) return;
	if(l==r){
		tree[l]=d;
		return;
	 }
	
	 
	 int mx_id=mxID(l,r);
	 
	 tree[mx_id]=d;
	 if(l<mx_id)build(2*id,l,mx_id-1,d+1);
	
	 if(mx_id<r)build(2*id+1,mx_id+1,r,d+1); 
	
	 return;
}
void solve(){
	memset(arr,nmax,0);
	memset(tree,nmax,0);
	int n;cin>>n;
	for(int i=1;i<=n;i++) cin>>arr[i];
	build(1,1,n,0);
	
	for(int i=1;i<=n;i++){
		cout<<tree[i]<<" ";
	}
	cout<<endline;
}
int main() {
	int t;cin>>t;
	while(t--){
		solve();
	}
    return 0;
}
