#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;

int main()
{
    char a[100]; // initilaize a char arr
    int b[26],max,cnt,no; // one intizer arr ,and other variable
    for(int i=0;i<26;i++)
        b[i]=0; // initalize all elements with array
    max=0;
    for(int i=0;i<4;i++)
    {
        cin.getline(a,99); 
        // The C++ getline() is an in-built function defined in the <string. h> header 
        // file that allows accepting and reading single and multiple line strings from the input stream. 
        // In C++, the cin object also allows input from the user, but not multi-word or multi-line input.
        //  That's where the getline() function comes in handy.
        for(int j=0;j<strlen(a);j++)
        {
            if(a[j]>=65&&a[j]<=90)
            {
                b[a[j]-65]++;
                if(b[a[j]-65]>max)
                    max=b[a[j]-65];
            }
        }
    }
    while(max)
    {
        cnt=no=0;
        for(int i=0;i<26;i++)
            if(b[i]==max)
            {
                if(cnt)
                {
                    printf(" ");
                    for(int j=0;j<no;j++)   
                        printf("  ");
                    no=0;
                }
                printf("*");
                cnt=1;
                b[i]--;
            }
            else
            {
                if(!cnt)
                    printf("  ");
                else
                    no++;
            }
        printf("\n");
        max--;
    }
    for(int i=0;i<26;i++)
        printf("%c ",i+65);
    return 0;
}