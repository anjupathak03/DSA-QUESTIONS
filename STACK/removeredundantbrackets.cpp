#include<iostream>
using namespace std;

void removeredundantbrackets(string str, stack<char> s){
    for(int i=0; i<str.size(); i++){

        if(s.empty()){
            
            s.push(str[i]);
            char ch = str[i];  
        }
        else{                   s = [

        
        if(str[i] == a || str[i] == b){
            i++;
             
        }
      
        else{
           
            
            if(str[i]=='+'){
               bool valid == true;
               i++;
            }
           else if(str[i-1] == '+' && str[i] == ']'){
                return true;
            }
            else{
                  return false;   
            }
        }
       

    }

}

int main(){
    string str = "[a+b]";
    stack<char> s;
    removeredundantbrackets(str, s);

}