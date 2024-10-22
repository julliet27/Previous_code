#include<bits/stdc++.h>
#define ll long long int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;
const int nmax=2e5+10;
long long int tree[4*nmax];
long long int arr[nmax];

void build(int id, int l ,int r){
    if(l==r){
        tree[id]=0;
        return ;
    }
    int mid =(l+r)/2;
    build(2*id, l , mid);
    build(2*id+1 , mid+1 , r);
    tree [id]= (tree [2*id]+ tree[2*id+1]);
    return ;
}

void update(int id , int l , int r , int k ,long long int u){
    if(l==r){
		
        tree[id]+=u;
        return;
    }

    int mid= (l+r)/2;

    if(k<=mid){
        update(2*id ,l ,mid , k,u);
    }
    else {
        update (2*id+1, mid+1,r,k,u);
    }
    tree[id]=(tree[2*id]+tree[2*id+1]);
    return ;
}

long long int query(int id, int l, int r, int a, int b){
    if( b < l || r < a ){
        return 0;
    }
    if( a <= l &&  r<= b) return tree[id];

    int mid = (l+r)/2;
	
    long long int p = query(2*id , l, mid, a,b);
    long long int q = query ( 2* id +1 , mid+1 , r ,a, b);
	
    return p+q;

}
int main(){
    fast_cin();
	int t;cin>>t;
	while(t--){
		memset(tree,0,sizeof(tree));
		memset(arr,0,sizeof(arr));
		int n;cin>>n;
		for(int i=1; i<=n; i++){
			cin>>arr[i];
		}
		ll ans=0;
		build(1,1,n);
		for(int x=1; x<=n; x++){
			int y = arr[x];
			
			
			
			ans+=query(1, 1, n, y, n);
			update(1, 1, n, y, 1);
			
		}
		
		cout<<ans<<endline;
		
		
    }
    return 0;
}



