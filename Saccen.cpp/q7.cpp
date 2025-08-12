#include<iostream>
using namespace std; 

string reverse(string str){
    string re = " ";
    for(int i=str.length()-1; i>=0; i--){
    re = re + str[i];
    
    }
    return re;

 }

int main(){
    string str ="Hello, Anju!";
    string aa =reverse(str);
    cout<<aa;
}