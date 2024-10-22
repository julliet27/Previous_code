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
		vector<int> cnt(31, 0), a(n);
        for(int i = 0;i < n; ++i) {
            cin >> a[i];
            for(int j = 30; j >= 0; --j) {
                if(a[i] & (1 << j)) ++cnt[j];
            }
        }
        int ans = 0;
        for(int i = 30; i >= 0; --i) {
            int need = n - cnt[i];
            if(need <= k) {
                k -= need;
                ans += (1 << i);
                //cout<<ans<<" ";
            }
        }
        //cout<<endline;
        cout << ans << "\n";
	}
    return 0;
}

