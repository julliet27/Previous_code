#include<bits/stdc++.h>
using namespace std;
int main(){
    for(int i=0,k=0;i<=13;i++){
        int temp=1;
        for(int j=0;j<=14;j++){
            if(i==0){
                if(j<5 || j>9){
                    cout<<0<<" ";
                }
                else{
                    cout<<" "<<" ";
                }
            }
            else{
                if (i<3){
                    if(i==1){
                        if(j==0 || j==14 || j==5 || j==9){
                            cout<<0<<" ";
                        }
                        else{
                            cout<<" "<<" ";
                        }
                    }
                    else if(i==2){
                         if(j==0 || j==14 || j==6 || j==8 ){
                            cout<<0<<" ";
                        }
                        else{
                            cout<<" "<<" ";
                        }
                    }
                    else{
                        cout<<" "<<" ";
                    }
                }
                else if(i==3){
                    if(j==0 || j==14 || j==7){
                        cout<<0<< " ";
                    }
                    else{
                        cout<<" "<<" ";
                    }
                }
                else if(i ==5){
                    if(j==7){
                        cout<<"E";
                    }
                    else if(j==8){
                        cout<<"I";
                    }
                    else if(j==9){
                        cout<<"D"<<"   ";
                    }
                    else if(j==0 || j==14){
                        cout<<0<<" ";
                    }
                    else{
                        cout<<" "<<" ";
                    }
                }
                else if(i==4){
                    if(j==0 || j==14){
                        cout<<0<<" ";
                    }
                    else{
                        cout<<" "<<" ";
                    }
                }
                else if(i==6){
                    if(j==6){
                        cout<<"M";
                    }
                    else if(j==7){
                        cout<<"U";
                    }
                    else if(j==8){
                        cout<<"B";
                    }
                    else if(j==9){
                        cout<<"R";
                    }
                    else if(j==10){
                        cout<<"A";
                    }
                    else if(j==11){
                        cout<<"R";
                    }
                    else if(j==12){
                        cout<<"A";
                    }
                    else if(j==13){
                        cout<<"K"<<"        ";
                    }
                    else if(j==0 || j==14){
                        cout<<0<<" ";
                    }
                    else{
                        cout<<" "<<" ";
                    }
                }
                else{
                    if(j==temp+k || j==14-temp-k){
                        cout<<0<<" ";
                    }
                    else{
                        cout<<" "<<" ";
                    }
                    if(j==14){
                        k++;
                    }
                }
            }
        }
        cout<<"\n";
    }
    return 0;
}