#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,n,a;
    cin>>t;
    for(int i=0;i<t;i++){
		cin >> n;
		vector<int> a(n);
		for (int j = 0; j < n; ++j)
			cin >> a[i];
		int num_odd = 0;
		for (auto x : a)
			if (x & 1)
                cout<<(x&1)<<" ";
				num_odd++;
		// cout << min(num_odd, n - num_odd) << endl;
    }
    return 0;
}