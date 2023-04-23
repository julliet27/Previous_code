#include<bits/stdc++.h>
#define N 40
using namespace std;
int arr[N];
int sum_of_digit(int n){
    if (n<10){
        return n;
    }
    else{
        return (n%10)+sum_of_digit(n/10);
    }
}
void sequence(int n){
    while(n<N){
        int index=n+sum_of_digit(n);
        if (index>=N || arr[index]!=index){
            return;
        }
        arr[index]=n;
        n=index;
    }
}
int main(){
    for(int i=0;i<N;i++){
        arr[i]=i+1;
    }
    for(int i=0;i<N;i++){
        sequence(i+1);
    }
    for(int i=0;i<N;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}