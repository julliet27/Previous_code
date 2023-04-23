#include<bits/stdc++.h>
using namespace std;
string q;
int t,size,ans,s;
int main()
{
	cin>>t;
	for (int i=1;i<=t;i++)
	{
		cin>>q;
		size=q.size();
		ans=0;
		for (int j=0;j<size;j++)
		 ans+=q[j]-'a'+1;  //adding ascii value in ans in string q
		s=min(q[0],q[size-1])-'a'+1;
		if (size%2){
            ans-=2*s;
        }
		if (ans>0) printf("Alice %d\n",ans);
		else printf("Bob %d\n",-ans);  
	}
	return 0;
}