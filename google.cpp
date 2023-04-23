// #include <bits/stdc++.h> 
// using namespace std;
// int main(){
// 	int T,N,A;
// 	cin>>T;
// 	for(int i=0;i<T;i++){
// 		cin>>N;
// 		int arr[N]={};
// 		for (int j=0;j<N;j++){
// 			cin>>A;
// 			arr[j]=A;
// 		}
		
// 	}
// 	return 0;
// }
// #include <bits/stdc++.h> 
// using namespace std;
// int solve(int arr[],int N){
// 	for (int i=0;i<N;i++){
// 		cout<<arr[i];
// 	}
// 	return 0;
// }
// int main(){
// 	int T,N,A;
// 	cin>>T;
// 	for(int i=0;i<T;i++){
// 		cin>>N;
// 		int arr[N]={};
// 		for (int j=0;j<N;j++){
// 			cin>>A;
// 			arr[j]=A;
// 		}
// 		solve(arr,N);
// 	}
// 	return 0;
// }
// #include <bits/stdc++.h> 
// using namespace std;
// int solve(int arr[],int N){
// 	int arr1[N]={};
// 	arr1[0]=arr[0];
// 	for (int i=0;i<N;i++){
// 		if (arr[i]>arr[i+1]){
// 			arr1[i+1]=arr[i];
// 		}
// 		else{
// 			arr1[i+1]=arr[i+1];
// 		}
// 	}
// 	for (int i=0;i<N;i++){
// 		cout<<arr1[i]<<" ";
// 	}
// 	return 0;
// }
// int main(){
// 	int T,N,A;
// 	cin>>T;
// 	for(int i=0;i<T;i++){
// 		cin>>N;
// 		int arr[N]={};
// 		for (int j=0;j<N;j++){
// 			cin>>A;
// 			arr[j]=A;
// 		}
// 		solve(arr,N);
// 	}
// 	return 0;
// }
// #include <bits/stdc++.h> 
// using namespace std;
// int solve(int arr[],int N){
// 	int arr1[N]={};
// 	arr1[0]=arr[0];
// 	if (N!=1){
//         for (int i=0;i<N;i++){
// 		    if (arr1[i]>arr[i+1]){
// 			    arr1[i+1]=arr[i];
// 			    if (arr1[i+1]%arr[i+1]!=0){
// 				    arr1[i+1]=arr[i+1]*2;
// 			    }
// 		    }
// 		    else{
// 			    arr1[i+1]=arr[i+1];
// 		    }
//         }
//     }
// 	for (int i=0;i<N;i++){
// 		cout<<arr1[i]<<" ";
// 	}
// 	return 0;
// }
// int main(){
// 	int T,N,A;
// 	cin>>T;
// 	for(int i=0;i<T;i++){
// 		cin>>N;
// 		int arr[N]={};
// 		for (int j=0;j<N;j++){
// 			cin>>A;
// 			arr[j]=A;
// 		}
// 		solve(arr,N);
// 	}
// 	return 0;
// }
// #include <bits/stdc++.h> 
// using namespace std;
// int main(){
// 	int T,N,A;
// 	cin>>T;
// 	for(int i=0;i<T;i++){
// 		cin>>N;
// 		long long int last=1;
// 		for (int j=0;j<N;j++){
// 			cin>>A;
// 			last=(last+A-1)/A*A;
// 			cout<<last<<" ";
// 		}
// 		cout<<"\n";
// 	}
// 	return 0;
// }
// #include <bits/stdc++.h> 
// using namespace std;
// int main(){
//     int arr[2][3]={{1,2,3},{4,5,6}};
//     for (int i=0;i<6;i++){
//         cout<<i/3<<" "<<i%3<<"\n";
//     }
//     return 0;
// /
// #include <bits/stdc++.h> 
// using namespace std;
// class Node {
// public:
//     int data;
//     Node* next;
//     Node* prev;
// };
// void printList(Node* n)
// {
//     while (n != NULL) {
//         cout << n->data << " ";
//         n = n->next;
//     }
// }
// int main(){
//     Node* head=NULL;
//     Node* tail=NULL;
//     Node* secondhead=NULL;
//     Node* secondtail=NULL;
//     head=new Node();
//     tail=new Node();
//     secondhead =new Node();
//     secondtail =new Node();
//     head->data=45;
//     head->next=secondhead;
//     secondhead->data=90;
//     secondhead->next=NULL;
//     // cout<<head->data<<" "<<second->data<<" "<<third->data;
//     printList(head);
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int a[]={19,27,36,10,64};
//     int n=sizeof(a)/sizeof(a[0]);
//     DoubleHash h;
//     for (int i=0;i<n;i++){
//         h.insertHash(a[i]);
//     }
//     return 0;
// }
#include <bits/stdc++.h>
#include <boost/algorithm/string.hpp>
using namespace std;
int main(){
    string a;
    cin>>a;
    vector<string>b;
    boost::split(b,a,boost::is_any_of(","));
    for (int i=0;i<b.size();i++){
        cout<<b[i]<<"\n";
    }
    return 0;
}
