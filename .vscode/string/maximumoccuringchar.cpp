#include<bits/stdc++.h>
using namespace std;

void maxocc(string input){
    int freq[26] = {0};
    int maxi = INT_MIN;
    for(int i=0; i<input.size(); i++){
        freq[input[i]-'a']++;
    }
    int maxiindex = 0;
    for(int i=0; i<26; i++){
       if( freq[i]>maxi){
        maxi = freq[i];
        maxiindex = i;
       }
    }
    cout<<maxi<<char(maxiindex + 'a')<<endl;
    // char occh = maxiindex + 'a';
    // cout<<occh;
    cout<<int('a');
}

int main(){
    string input;
    getline(cin, input);
    maxocc(input);
}