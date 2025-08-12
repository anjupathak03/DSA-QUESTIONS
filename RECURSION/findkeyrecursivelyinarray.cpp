#include<iostream>
#include <string>
using namespace std;

int findkey(string str, char key, int l, int i){
   if(i>l){
    return 0;
   }
  if(str[i]==key){
    return  i;
  }
  

return findkey(str, key,l, i+1);
 
}

int main(){
    string str ="love babbar";
    int l = str.length();
    char key = 'r';
    int findkeyindex = findkey(str, key, l, 0);
    cout<<findkeyindex;
    return 0;
    
}