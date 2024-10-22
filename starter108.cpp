#include<bits/stdc++.h>
#define ll long long int
#define u int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;
const ll mx=1e8+5;
vector<string>PalindromincPrime{"2","3","5","7","11"};
bool isPrime(ll num){
    if(num%2==0) return false;
    for(ll i=3;i*i<=num;i+=2){
        if(num%i==0) return false;
    }
    return true;
}
void palindrome(){
   for(int i=1;i<=mx;i++){
        for(int j=0;j<=9;j++){
            string str1=to_string(i);
            string str2=str1+to_string(j);
            if((str2[0]-'0')%2!=0){
                reverse(str1.begin(),str1.end());
                str2+=str1;
                ll siz = stol(str2);
                if(isPrime(siz)){
                    PalindromincPrime.push_back(str2);
                }
            }
        }
   }
   cout<<PalindromincPrime.size()<<endline;
}
int main(){
    fast_cin();
    palindrome();
//    int t;cin>>t;
//    while(t--){
//        int n;cin>>n;
//        int even=0,odd=0;
//        for(int i=0;i<n;i++){
//            if()
//        }
//    }
    return 0;
}

