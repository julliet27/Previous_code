#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    while (true){
        cin>>str;
        smatch m; // typedef std:: match_result<string>, store the matching part of string
        //regex e("abc", regex_constants::icase);
        // any charecter except newline , it can len(str)+1 charescters abcd, abcs
        //regex e("abc?");
        // only zero (ab) or 1 predicting (abc) char, just charecter will be consider ab , abc
        // regex e("abc*", regex_constants::icase);
        // Zero (ab) or more preceding (abcc), only last char can multiple time abccccc, abccc, ab
        // regex e("abc+", regex_constants::icase);
        // 1 (abc) or more preceding (abcc), only last char can multiple time abccccc, abccc
        //regex e("ab[cd]*", regex_constants::icase);
        // anything in square bractes abc ab abcd
        // regex e("ab[^cd]*",regex_constants::icase);
        // anything not inside the brackets abghfe,abe
        //regex e("ab[cd]{3}",regex_constants::icase); 
        // abccc , abcdc , abddd , abcd
        //regex e("ab[cd]{3,}",regex_constants::icase);
        // abccc, abccd , abccdddd 
        //regex e("ab[cd]{3,5}",regex_constants::icase);
        // abccc , abcccd, abccddd
        //regex e("abc|de[fg]",regex_constants::icase);
        // abc , def , deg
        // **** regex e("abc|de[\]fg]",regex_constants::icase);
        //regex e("(abc)|de+\\1",regex_constants::icase);
        // abcdeeabc
        //regex e("(ab)c(de+)\\2\\1",regex_constants::icase);
        //abcdeeedeeeab
        // regex e("[[:w:]]+@[[:w:]]+\\.com");
        // [[:w:]] word character: digit, number, or underscore
        // bool match=regex_match(str,e);
        //regex e("^abc.", regex_constants::icase);
        // first a checking is there abc
        //regex e("abc.$", regex_constants::icase);
        // last a checking is there abc
        //regex e("abc+$",regex_constants::grep);
        // regex e("/^([a-b]).*\1$|^[a-b]{1}$/gm");
        // here + is treat like a charecter for grep function  
        // bool match=regex_search(str,e);
        // cout<<(match?"matched":"Not matched")<<"\n";
        // regex e("([[:w:]]+)@([[:w:]]+)\\.com");
        // bool found=regex_search(str,m,e);
        // cout<<"m.size()"<<m.size()<<endl;
        // for(int i=0;i<m.size();i++){
        //     cout<<m[i]<<"\n";
        //     cout<<*(m.begin()+i)<<"\n";
        // }
        // entire match part (same with m.str())
        // substring first part (same with m.str(1))
        // substring seconf part
        // cout<<"prefix: "<<m.prefix().str()<<"\n"; // fiest match string before part
        // cout<<"suffix: "<<m.suffix().str()<<"\n"; // last match string after part
    }
    return 0;
}