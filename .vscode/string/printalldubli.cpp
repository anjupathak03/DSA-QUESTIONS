#include<bits/stdc++.h>
using namespace std;

void removedublicate(string input){
int freq[26] = {0};
for(int i=0; i<input.size(); i++){
   freq[input[i]-'a']++;  
}
for(int i=0; i<26; i++){
    if(freq[i]>1){
   cout<<char(i+'a')<<freq[i]<<endl;
 }


}
}
int main(){
    string input;
    getline(cin, input);
    removedublicate(input);
}