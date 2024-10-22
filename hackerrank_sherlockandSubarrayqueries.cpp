#include<bits/stdc++.h>
#define ll long long int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;
const int nmax=2e5+10;
pair<ll ,ll > tree[4*nmax];
long long int arr[nmax];

void build(int id, int l ,int r,char a){
	//cout<<a<<" "<<id<<" "<<l<<" "<<r<<endline;
    if(l==r){
		
        tree[id]={arr[l],1};
        return ;
    }
    
    int mid =(l+r)/2;
    build(2*id, l , mid,'a');
    build(2*id+1 , mid+1 , r,'b');
    if(tree[2*id].first==tree[2*id+1].first){
		tree[id]={tree[2*id].first,tree[2*id].second+tree[2*id+1].second};
    }
    else if(tree[2*id].first<tree[2*id+1].first) tree[id]=tree[2*id+1];
    else tree [id]= tree [2*id];
    return ;
}

//void update(int id , int l , int r , int k ,long long int u){
//    if(l==r){
//        apply();
//        return;
//    }
//
//    int mid= (l+r)/2;
//
//    if(k<=mid){
//        update(2*id ,l ,mid , k,u);
//    }
//    else {
//        update (2*id+1, mid+1,r,k,u);
//    }
//    tree[id]=op(tree[2*id],tree[2*id+1]);
//    return ;
//}
//
pair<int,int> query(int id, int l, int r, int a, int b,int mx){
	
    if( b < l || r < a ){
        return {-1,-1};
    }
    if( a <= l &&  r<= b) {
		
		return tree[id];
    }
    

    int mid = (l+r)/2;

    pair<ll,ll> p = query(2*id , l, mid, a,b,mx);
    pair<ll,ll> q = query ( 2* id +1 , mid+1 , r ,a, b,mx);
	
    if(p.first>q.first) return p;
    else if (p.first<q.first) return q;
    else{
		pair<ll,ll>x;
		x.first=p.first;
		x.second=p.second+q.second;
		return x;
    }

}
int main(){
    fast_cin();

    int n,q;
    cin>>n>>q;

    for(int i=1;i<=n;i++){ cin>>arr[i];}

    build(1,1,n,' ');
//	for(int i=0;i<11;i++){
//		cout<<i<<" "<<tree[i].first<<" "<<tree[i].second<<endline;
//		
//	}
    for(int i=0;i<q;i++){
        int a,b;
        cin>>a>>b;
        auto p=query(1,1,n,a,b,-1);
        cout<<p.second<<endline;
    }
    return 0;
}



