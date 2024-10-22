#include<bits/stdc++.h>
#define ll long long int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;

int main() {
	int t;cin>>t;
	while(t--){
		ll n,k;cin>>n>>k;
		vector<int> a(n);
        if (n == 1) {
            a[0] = k;
        }
        else {
            int msb = log2(k);
            
            a[0] = (1 << msb) - 1;
            a[1] = k - a[0];
           
            for (int i = 2; i < n; i++) {
                a[i] = 0;
            }
        }
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << "\n";
		
	}
    return 0;
}
