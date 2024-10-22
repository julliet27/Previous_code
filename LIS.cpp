#include <bits/stdc++.h>
using namespace std;
int longest_increasing_subsequence(vector<int>& arr)
{
	vector<int> ans;
	int n = arr.size();
	for (int i = 0; i < n; i++) {
		auto it = lower_bound(ans.begin(), ans.end(), arr[i]);
		cout<<it-ans.begin()<<" "<<arr[i]<<endl;
		if (it == ans.end()) {
            cout<<"ans-----"<<it-ans.begin()<<" "<<arr[i]<<endl;
			ans.push_back(arr[i]);
		}
	}
	return ans.size();
}
int main()
{
	vector<int> a = { 10, 22, 9, 1 , 2, 3 ,33, 21, 5,7,50, 41, 60,11,12,13,14 };
	int ans = longest_increasing_subsequence(a);
	cout << ans;
	return 0;
}

