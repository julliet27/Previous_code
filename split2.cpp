#include <bits/stdc++.h>
#include <boost/algorithm/string.hpp>
using namespace std;
void solve(string a){
    vector<string> result;
    boost::split(result, a, boost::is_any_of("\t"));
 
    for (int i = 0; i < result.size(); i++)
        cout << result[i] << endl;
}
int main(){
    string a;
    cin>>a;
    return 0;
    solve(a);
}
