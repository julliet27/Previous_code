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
		ll n,k;cin>>n>>k;
		int odd=n,oddK=k,even=n,evenK=k;
		vector<int>vecO,vecE;
		while(oddK>1){
		  odd-=1;
		  oddK-=1;
		  vecO.push_back(1);
		}
		while(evenK>1){
		  even-=2;
		  evenK-=1;
		  vecE.push_back(2);
		}
		if(odd%2==1 && odd>0){
			vecO.push_back(odd);
			cout<<"YES"<<endline;
			for(int i:vecO) cout<<i<<" ";
			cout<<endline;
		}
		else if(even%2==0 && even>0){
			vecE.push_back(even);
			cout<<"YES"<<endline;
			for(int i:vecE) cout<<i<<" ";
			cout<<endline;
		}
		else cout<<"NO"<<endline;
    }
    return 0;
}

