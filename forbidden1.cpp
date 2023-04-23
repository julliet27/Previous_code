#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    while (n--) {
        int vis[26];
        string s,s1,t,t1;
        cin >> s >> t;
        s1 = s,t1 = t;
        sort(s1.begin(),s1.end());
        for (auto a :s) {
            vis[a-'a']++;
        }
        if (t != "abc"||!vis[0]||!vis[1]||!vis[2]){
            cout <<"Ans: "<< s1 <<endl;}
        else {
            while(vis[0]--)cout << "a";
            while(vis[2]--)cout << "c";
            while(vis[1]--)cout << "b";
            for (int i = 3;i<26;i++){
                while(vis[i]--)
                    cout << char(i + 'a');
            }
            cout << endl;
        }
    }
}