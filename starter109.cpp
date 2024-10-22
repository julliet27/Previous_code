#include<bits/stdc++.h>
#define ll long long int
#define u int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;
void solve(){

    int N; cin>>N;
    vector<int> B(N,0);
    vector<int> E;
    vector<int> O;
    for(auto &b:B){
        cin>>b;

        if(b%2==0) E.push_back(b);
        else O.push_back(b);
    }

    sort(E.rbegin(), E.rend());
    sort(O.rbegin(), O.rend());

    int e = 0;
    if(E.size()%2==0) e = E.size()/2;
    else{
        cout<<-1<<endl; return;
    }

    int o = 0;
    if(O.size()%2==0) o = O.size()/2;
    else{
        cout<<-1<<endl; return;
    }

    vector<int> A(N,0);
    for(int i=0;i<e;i++){
        A[i] = (E[i] + E[i+e])/2;
        A[i+N/2] = (E[i] - E[i+e])/2;
    }
    for(int i=e;i<e+o;i++){
        A[i] = (O[i-e] + O[i-e+o])/2;
        A[i+N/2] = (O[i-e] - O[i-e+o])/2;
    }

    for(auto a:A) cout<<a<<" ";
    cout<<endl;

}

int main() {
	fast_cin();
	int T; cin>>T;
	while(T--){
	    solve();
	}
	return 0;
}
