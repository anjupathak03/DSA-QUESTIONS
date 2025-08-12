#include<bits/stdc++.h>
using namespace std;
int highocccharfreq(string word){
    int freq[26] ={0};
    int maxfreq = 1;
    for(char ch: word){
        freq[ch-'a']++;
        maxfreq = max(freq[ch-'a'], maxfreq);
    }
    return maxfreq;
}

string findwordwithhighestno(string input){
    stringstream sc(input);
    string word;
    char ch;
    string maxword ="";
    int maxfreqe = 1;
  bool found = false;
    while(sc>>word){
     int number = highocccharfreq(word);
     if (number > 1) {  
        found = true;
     if(maxfreqe<number){
        maxfreqe = number;
        maxword = word;
     }

    }
}
    if (found) {
        return maxword;
    } else {
        return "-1";
    }
   
}

int main(){
   string input;
   getline(cin, input);
   string ans = findwordwithhighestno(input); 
   cout<<ans;
}