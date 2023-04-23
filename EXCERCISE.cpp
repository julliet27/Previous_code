#include<bits/stdc++.h>
using namespace std;
int main(){
    // string str;
    // cin>>str;
    // regex e("/^([a-b]).*\1$|^[a-b]{1}$/gm");
    // bool match=regex_search(str,e);
    // cout<<(match? "matched":"Not matched");
    // int arr[]={3,3,1,2,2,3,3,3,3,3,2,2,2,1,1,4};
    // set<int>S;
    // vector<pair<int,int>>vec;
    // for(int x:arr){
    //     S.insert(x);
    // }
    // for(int x: S){
    //     int count=0;
    //     for(int y:arr){
    //         if(x==y){
    //             count++;
    //         }
    //     }
    //     vec.push_back(make_pair(x,count));
    // }
    // bool found=find(vec[0].second, vec)
    // sort(vec.rbegin(),vec.rend());
    // regex Pattern("hackerrank");
    // string Str;
    // int count=0;
    // cin>>Str;
    // smatch M;
    // if (regex_search(Str,M,Pattern)==true){
    //     count++;
    // }
    // cout<<"Number of matches :"<<count;
    // string str;
    // regex pattern("\\d\\d\\D\\d\\d\\D\\d\\d\\d\\d+");
    // while(cin>>str){
    //     bool match=regex_match(str,pattern);
    //     cout<<(match? "true":"false"); 
    // }
    // vector<int>vec{10,4,8,13,20};
    // int m=2,sum=0,temp=0;
    // for(int i=0;i<vec.size();i++){
    //     sum+=vec[i];
    //     int temp_sum=0;
    //     for(int j=i;(j<i+m) && (i+m<=vec.size());j++){
    //         temp_sum+=vec[j];
    //         // cout<<vec[j]<<" ";
    //     }
    //     temp=max(temp,temp_sum);
    //     // cout<<temp<<endl;
    // }
    // cout<<sum<<" "<<temp<<" "<<sum-temp<<"\n";
    // vector<int>vec{6,5,4,1,3};
    // sort(vec.begin(),vec.end());
    // int k=7,sum=0,temp_size=k-vec.size(),size=0;
    // for(int i=1;i<=1000000;i++){
    //     if (find(vec.begin(),vec.end(),i)!=vec.end()){}
    //     else{
    //         cout<<i<<" "<<endl;
    //         size++;
    //         sum+=i;
    //         if(temp_size==size){
    //             break;
    //         }
    //     }
    // }
    // cout<<sum;
    // vector<int>vec{1,2,3};
    // int size=(1<<vec.size());
    // vector<vector<int>>inner_vec;
    // vector<int>outter_vec;
    // for(int mask=0;mask<size;mask++){
    //     for(int i=0;i<3;i++){
    //         if((mask & (1<<i))!=0){
    //             outter_vec.push_back(vec[i]);
    //         }
    //     }
    //     inner_vec.push_back(outter_vec);
    // }
    // for(int i=0;i<inner_vec.size();i++){
    //     for(int j=0;j<inne_vec.size();j++){
    //         cout<<
    //     }
    // }
    // cout<<endl;
    // const re = /<a\s+.*?href="([^"]+)"(?:[^<>]*)>(?:<[a-z][a-z0-9]*\b[^>]*>)*([^<>]*)</ig;
    // let matches = null;
    // while ((matches = re.exec(input)) !== null) {
    //     console.log(`${matches[1].trim()},${matches[2].trim()}`);
    // }
    // // <a\s+.*?href=" matches anything between <a and href=" .
    // // ([^"]+) part matches the link.
    // "(?:[^<>]*)> matches optional props of a tag. Since we are not 
    // interested in them, (?:...) makes it a non-capturing group.
    // (?:<[a-z][a-z0-9]*\b[^>]*>)* matches optional embedded tags. 
    // Since in HTML5 it is valid to wrap block-level elements
    // (like div, p or h*) in anchor tags.
    // ([^<>]*) is the text we need.
    // < marks the end of the text.
    // re uses a "lastIndex" property to track the index at which to
    // start the next match. while loop simply keeps matching
    // a tags till the end of the input.
    //return 0;
    // int n,SUM=0;
    // cin>>n;
    // for(int i=0;i<=10;i++){
    //     cout<<n;
    // }
    string str = "abbad" ;
    for(int i=0;i<str.length();i++){
        for(int j=str.length();j>i;j--){
            string sub_str=str.substr(i,j);
            cout<<sub_str<<" ";
        }
    }
    return 0;
}