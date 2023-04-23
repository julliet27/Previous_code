#include<bits/stdc++.h>
using namespace std;
int main(){
//Prefix_sum (use: Sub_array Sum,binary xor)
    // Prob: ans the sum of arr index r to l;
    // int arr[8]={10,20,30,40,50,60,70,80};
    // int temp_sum[8],sum=0,r=6,l=0;
    // //temp_arr[0]=arr[0];
    // for(int i=0;i<8;i++){
    //     sum+=arr[i];
    //     //temp_arr[i]=arr[i]+temp_arr[i-1];
    //     temp_sum[i]=sum;
    // }
    // // cout<<temp_arr[r]-temp_arr[l-1]<<"\n";
    // // error: l-1 can not be negetive
    // if(l-1!=0){
    //     cout<<temp_sum[r]-temp_sum[l-1]<<"\n";
    // }
    // else{
    //     cout<<temp_sum[r];
    // }
    // prob : how many pairs have that (l,r) all integer sum is zero;
    // int arr[]={10,10,5,15,5,10,5};
    // int sum=20,temp_sum=0,temp_arr[7],count=0;
    // for(int i=0;i<7;i++){ 
    //     temp_sum+=arr[i];
    //     temp_arr[i]=temp_sum;
    // }
    // for(int i=0;i<7;i++){ // my rediculas solution
    //     temp_sum+=arr[i];
    //     temp_arr[i]=arr[i];
    //     cout<<temp_sum<<" ";
    //     if (temp_sum==20){
    //         count++;
    //         temp_sum=0;
    //     }
    // }
    // for(int r=0;r<7;r++){ //another redicular solution
    //     for(int l=0;l<r;l++){
    //         if((temp_arr[r]-temp_arr[l-1])==sum){
    //             count++;
    //         }
    //     }
    // }
    // temp[-1]=0
    // map<int,int>MP;
    // int ans=0;
    // MP[0]++;
    // for(int r=0;r<7;r++){
    //     int x=temp_arr[r]-sum;
    //     if(MP.count(x)==0);
    //     else{
    //         ans+=MP[x];
    //     }
    //     MP[temp_arr[r]]++;
    // }
    // cout<<ans<<" ";
    // int arr[9]={0,1,0,0,0,1,1,0,0 };
    // // how many zero between 3 to 7
    // int temp_arr[9],temp_sum=0;
    // for(int i=0;i<7;i++){ 
    //     temp_arr[i]=arr[i]+temp_arr[i-1];
    //     temp_arr[i]=temp_sum;
    // }
    // map<int,int>MP;
    // int ans=0;
    // MP[0]++;
    // for(int r=0;r<7;r++){
    //     int x=temp_arr[r]-0;
    //     if(MP.count(x)==0);
    //     else{
    //         ans+=MP[x];
    //     }
    //     MP[temp_arr[r]]++;
    // }
    // cout<<ans<<" ";
// Bitmask_application
    // int A=3,C=5,B=3, D=5;
    // int mask1=0,mask2=0;
    // mask1=(mask1|1<<A);
    // cout<<mask1<<endl;
    // mask1=(mask1|1<<C);
    // cout<<mask1<<endl; 
    // mask2=(mask2|1<<B);
    // cout<<mask2<<endl; 
    // mask2=(mask2|1<<D);
    // cout<<mask2<<endl;
    // int intersection=(mask1 & mask2);
    // cout<<intersection<<endl;
    // int common_days=__builtin_popcount(intersection);
    // cout<<common_days;
    vector<int>vec{2,3,5};
    int size=(1<<vec.size());
    for(int mask=0;mask<size;mask++){
        for(int i=0;i<3;i++){
            if((mask & (1<<i))!=0){
                cout<<vec[i]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}