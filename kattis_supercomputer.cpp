#include<bits/stdc++.h>
#define ll long long int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;
const int nmax=1e6+10;
long long int tree[4*nmax];

void update(int id , int l , int r , int k ,long long int u){
    if(l==r){
        if(tree[id]) tree[id]=0;
        else tree[id]=1;
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

    int n,q;
    cin>>n>>q;
    for(int i=0;i<q;i++){
        char type;
        cin>>type;
        if(type=='F'){
            int u;
            cin>>u;

            // update : put u at k index
            update (1 ,1,n,u,1);
        }
        else{
            int l , r;
            cin>>l>>r;

            // output sum of [ l ... r]

            int ans= query ( 1,1,n,l,r);
            cout<<ans<<endline;
        }
    }
    return 0;
}



