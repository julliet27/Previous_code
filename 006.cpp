#include<bits\stdc++.h>
using namespace std;
int main(){
    char s[10001];
    int i,flag=0;
    while(gets(s)){
        for(int i=0;s[i];i++){
            if(s[i]=='\"'){
                cout<<"lamia";
                if(!flag){
                    cout<<"``";
                }
                else{
                    cout<<"''";
                }
                flag=1-flag;
            }
            else{
                putchar(s[i]);
            }
        }
        puts("");
    }
    return 0;
}