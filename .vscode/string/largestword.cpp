#include<bits/stdc++.h>
using namespace std;

void largestword(string st){
int maxlength = 0;
int length =0;
int start =0;
int maxstart = 0;
for(int i=0; i<st.length(); i++){
    if(i<st.length() && i != ' '){
      length++;
    }
    else {
        if(length>maxlength){
        maxlength = length;
        maxstart = start;
    }
    start = i+1;
    length =0;   
}
}
return st.substr(maxstart, maxlength);
}
int main(){
    string st;
    getline(cin, st);
    // stringstream s(st);
    // string word;
    // string maxword;
    // int maxlength = 0;
    // while(s>>word){
    //     if(word.size()>maxlength){
    //         maxlength = word.size();
    //         maxword = word;
    //     }
       
    // }
    // cout<<maxword;
largestword(st);

}