#include <bits/stdc++.h> 
using namespace std;
int main(){
    int n,m,f;
    cin>>n>>m;
    int arr[m];
    for(int i=0;i<m;i++){
        cin>>f;
        arr[i]=f;
    }
    sort(arr,arr+m);
    int ans=arr[n-1]-arr[0];
    for(int k=1;k<=m-n;k++){
        ans=min(ans,arr[k+n-1]-arr[k]);
    }
    cout<<ans<<"\n";
    return 0;
}
50 20
-815 -947 -946 -993 -992 -846 -884 -954 -963 -733 -940 -746 -766 -930 -821 -937 -937 -999 -914 -938 -936 -975 -939 -981 -977 
-952 -925 -901 -952 -978 -994 -957 -946 -896 -905 -836 -994 -951 -887 -939 -859 -953 -985 -988 -946 -829 -956 -842 -799 -886