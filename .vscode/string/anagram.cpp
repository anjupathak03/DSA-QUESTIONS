#include<bits/stdc++.h>
using namespace std;
bool checkanagram(string input1, string input2){
    if(input1.length() != input2.length()){
        return false;
    }
   int freq[26] = {0};
    for(int i=0; i<input1.size(); i++){
       freq[input1[i]-'a']++;
    }
    for(int i=0; i<input2.size(); i++){
        freq[input2[i]-'a']--;
    }
    for(int i=0; i<26; i++){
        if(freq[i] !=0){
        return false;
    }
}
    return true;

}

int main(){
    string input1;
    string input2;
    cin>>input1>>input2;
    bool ans = checkanagram(input1, input2);
   cout<<ans;
    //cout<<input1<<" "<<input2;
}