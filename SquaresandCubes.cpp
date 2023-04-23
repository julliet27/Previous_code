#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int x=sqrt(n);
		int y=cbrt(n);
		int p=cbrt(sqrt(n));
		cout<<x+y-p<<endl;
	}
}