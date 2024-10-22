#include<bits/stdc++.h>
#define ll long long int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;

const int nmax=1e6+10;
int tree[4*nmax];
int arr[nmax];

void build(int id, int l ,int r){
    if(l==r){
        tree[id]=arr[l];
        return ;
    }
    int mid =(l+r)/2;
    build(2*id, l , mid);
    build(2*id+1 , mid+1 , r);
    tree [id]+= (tree [2*id]+ tree[2*id+1]);
    return ;
}

void update(int id , int l , int r , int k ,int u){
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
int query(int id, int l, int r, int k){
    
    if(l==r) return l;
   
    int mid = (l+r)/2;

    if(k<=tree[2*id]) return query(2*id , l, mid, k);
    else return query ( 2* id +1 , mid+1 , r ,k-tree[2*id]);

  

}
int main(){
    fast_cin();

    int n,q;
    cin>>n>>q;

    for(int i=1;i<=n;i++){ 
        int a;cin>>a;
        arr[a]++;
    }
    
    build(1,1,n);
    
    for(int i=0;i<q;i++){
        int qury;
        cin>>qury;
        if(qury>0){
           update(1 , 1 , n , qury ,+1);
        }
        else{
           
            int idx=query(1,1,n,abs(qury));
            
            update(1 , 1 , n , idx ,-1);
            
        }
    }
    if(tree[1]==0) cout<<0<<endline;
    else cout<<query(1,1,n,1)<<endline;
    return 0;
}



