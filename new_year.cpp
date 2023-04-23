#include <bits/stdc++.h> 
using namespace std;
int main(){
    int t,n;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        int cnt2021 = n % 2020;
        int cnt2020 = (n - cnt2021) / 2020 - cnt2021;
        if (cnt2020 >= 0 && 2020 * cnt2020 + 2021 * cnt2021 == n) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}