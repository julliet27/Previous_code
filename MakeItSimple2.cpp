#include <bits/stdc++.h> 
using namespace std;
void count(long long int num){
    int countprime=0;
    for (long long int i=1;i<=num;i++){
        if (num%i==0){
            countprime++;
        }
    }
    cout<<countprime<<" "<<num<<"\n";
    
}
void primefind(int size,vector<long long int>&factor){
    for (int i=size-1;i>0;i--){
        long long int num=factor[i];
        count(num);
    }
}
void primefactor(unsigned long int prime){
    vector<long long int>factor;
    
    for (long long int i=2;i<=prime;i++){
        if (prime%i==0){
            factor.push_back(i);
        }
    }
    long long int size=factor.size();
    primefind(size,factor);

}
int main(){
    unsigned long int prime;
    cin>>prime;
    primefactor(prime);
    
    return 0;
}