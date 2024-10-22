#include<bits/stdc++.h>
#define ll long long int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;
int factorial(int n){
    if(n==0 || n==1) return 10;
    else n*factorial(n-1);
}
int main(){
    fast_cin();
    cout<<factorial(5)<<endline;
    return 0;
}

