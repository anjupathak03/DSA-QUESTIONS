#include<iostream>
using namespace std;

 bool validana(string a, string b){
    int freq[256] ={0};
    for(int i=0; i<a.size(); i++){
        freq[a[i]]++;
    }
     for(int i=0; i<b.size(); i++){
        freq[a[i]]--;
    }
     for(int i=0; i<256; i++){
        if(freq[i]!=0){
            return false;
        }
       
    }
     return true;

 }

int main(){
    string a = "anagram";
    
    string b = "nagaram"; 

    cout<<validana(a, b);

}