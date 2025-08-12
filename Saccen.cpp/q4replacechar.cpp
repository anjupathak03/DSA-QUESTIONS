#include<iostream>
using namespace std;

 void replaceocurrences(string &str, char char2, char ch){
    for(int i =0; i<str.size(); i++){
         if(str[i]==char2){
        str[i]=ch;
    }
    else if(str[i]==ch) {
        str[i]=char2;

    }
    }
 }

int main(){
    string str ="apples";
    char ch = 'a';
    char char2 ='p';
   replaceocurrences(str, char2, ch);
  cout<<str;
}