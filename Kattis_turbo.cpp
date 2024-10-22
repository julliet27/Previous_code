#include<bits/stdc++.h>
#define ll long long int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;
const int nmax=1e6+10;
long long int tree[4*nmax];
void build(int id, int l,int r){
	if(l==r){
		tree[id]=1;
		return;
	}
	int mid = (l+r)/2;

    build(2*id,l,mid);
    build(2*id+1,mid+1,r);
	tree[id]=(tree[2*id]+tree[2*id+1]);
}
void update(int id , int l , int r , int k ,long long int u){
    if(l==r){
        
        tree[id]=0;
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

int query(int id, int l, int r, int a, int b){
    if( b < l || r < a ){
        return 0;
    }
    if( a <= l &&  r<= b) return tree[id];

    int mid = (l+r)/2;

    int p = query(2*id , l, mid, a,b);
    int q = query ( 2* id +1 , mid+1 , r ,a, b);

    return (p+q);

}
int main(){
    fast_cin();

    int n;cin>>n;
    map<int,int>mp;
    int arr[n];
    build(1,1,n);
    for(int i=1;i<=n;i++){
		int a;cin>>a;
		mp[a]=i;
		arr[i]=a;
    }
    int x=1,y=n;
    for(int i=0;i<n;i++){
        if(i%2==0){
			
			update(1,1,n,mp[x],1);
			
			cout<<query (1, 1,n,1,mp[x])<<endline;
			x++;
        }
        else{
			update(1,1,n,mp[y],1);
			cout<<query (1, 1 , n, mp[y] , n )<<endline;
			y--;
        }
    }
    return 0;
}



