#include<bits/stdc++.h>
using namespace std;

void removechar(string str1, string str2){
    int freq[26] = {0};
    string ans = "";
    for(int i=0; i<str2.size(); i++){
        freq[str2[i]-'a'] = 1;
       
    }
    for(int i=0; i<str1.length(); i++){
       if(freq[str1[i]-'a']==0){
        cout<<str1[i];
       }
    }
}

int main(){
    string str1;
    string str2;
    cin>>str1>>str2;
    removechar(str1, str2);
}