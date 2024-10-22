#include<bits/stdc++.h>
#define ll long long int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;
const int nmax=2e5+10;
pair<ll,ll> tree[4*nmax];
long long int arr[nmax];

void build(int id, int l ,int r){
    if(l==r){
        tree[id]={arr[l],l};
        return ;
    }
    int mid =(l+r)/2;
    build(2*id, l , mid);
    build(2*id+1 , mid+1 , r);
    
    tree[id]=max(tree[2*id],tree[2*id+1]);
    return ;
}

void update(int id , int l , int r , int k ,long long int u){
    if(l==r){
        tree[id].first=u;
        return;
    }

    int mid= (l+r)/2;

    if(k<=mid){
        update(2*id ,l ,mid , k,u);
    }
    else {
        update (2*id+1, mid+1,r,k,u);
    }
    tree[id]=max(tree[2*id],tree[2*id+1]);
    return ;
}

pair<ll,ll> query(int id, int l, int r, int a, int b){
    if( b < l || r < a ){
        return {-1,-1};
    }
    if( a <= l &&  r<= b) return tree[id];

    int mid = (l+r)/2;

    pair<ll,ll>p = query(2*id , l, mid, a,b);
    pair<ll,ll>q =query ( 2* id +1 , mid+1 , r ,a, b);
    
    
    return max(p,q);

}
int main(){
    fast_cin();

    int n,q;
    cin>>n;

    for(int i=1;i<=n;i++){ cin>>arr[i];}

 
    build(1,1,n);
	
	cin>>q;
    for(int i=0;i<q;i++){
        char type;
        cin>>type;
        if(type=='U'){
            int k,u;
            cin>>k>>u;

            /// update : put u at k index
            arr[k]=u;
            update(1,1,n,k,u);
        }
        else{
            int l , r;
            cin>>l>>r;

            /// output sum of [ l ... r]

            pair<ll,ll> p= query(1,1,n,l,r);
            update(1,1,n,p.second,0);
            pair<ll,ll> q= query(1,1,n,l,r);
            update(1,1,n,p.second,p.first);
            cout<<p.first+q.first<<endline;
        }
    }
    return 0;
}



