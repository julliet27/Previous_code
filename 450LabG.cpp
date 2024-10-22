#include<bits/stdc++.h>
#define ll long long int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;
void countlps(int* lps,int n,string b){
    lps[0]=0;
    int len=0,i=1;
    while(i<n){
        if(b[i]==b[len]){
            len++;
            lps[i]=len;
            i++;
        }
        else{
            if(len!=0){
                len=lps[len-1];
            }
            else{
                len=0;
                i++;
            }
        }
    }
}
//AA AABAACAABAA
void kmp(string a,string b,vector<int>&ans){
    int m=a.size();
    int n=b.size();
    int lps[n];
    memset(lps,0,sizeof(lps));
    countlps(lps,n,b);
    int i=0,j=0;
    while(m-i>=n-j){
        if(a[i]==b[j]){
            i++;
            j++;
        }
        if(j==n){
            ans.push_back(i-j);
            j=lps[j-1];
        }
        else if(i<m && a[i]!=b[j]){
            if(j!=0){
                j=lps[j-1];
            }
            else{
                i++;
            }
        }
    }
}
int main(){
    //fast_cin();
    vector<int>vec;
    //int t;cin>>t;
    //while(1){
        int n;cin>>n;
        string a,b;cin>>a>>b;
        vector<int>ans;
        kmp(b,a,ans);

        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<endline;
        }

    //}
    return 0;
}