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
		int n;cin>>n;
		vector<int>vec(n,0);
		for(int i=0;i<n;i++) { cin>>vec[i];}
		int ansl=0,ansr=0,suml=0,sumr=0;
		int l=0,r=n-1,cnt=0;
		while(l<=r){
			if(cnt%2==0){
				int nsum=0;
				while(l<=r && nsum<=sumr){
					nsum+=vec[l++];
				}
				ansl += nsum;
				suml= nsum;
			}
			else{
				int nsum=0;
				while(l<=r && nsum<=suml){
					nsum+=vec[r--];
				}
				ansr += nsum;
				sumr= nsum;
			}
			cnt++;
		}
		cout<< cnt<<" "<<ansl<<" "<<ansr<<endline;
		
		
    }
    return 0;
}

