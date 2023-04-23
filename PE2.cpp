#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,sum=1,x=1,y=1,sum1=0;
    while(sum1<=4000000){
        a=x;
        sum=x+y;
        if (sum%2==0){
            sum1+=sum;
        }
        x=sum;
        y=a;
    }
    cout<<sum1;
}