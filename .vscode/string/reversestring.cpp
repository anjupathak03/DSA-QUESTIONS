#include<bits/stdc++.h>
using namespace std;


 string findasciivalue(string arr){
    int i=0;
    int j = arr.size()-1;
   
  while(i<j){
   char temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;  
    i++;
    j--;
  }
  cout<<arr;
}

int main(){
    string str;
    getline(cin, str);
   
    findasciivalue(str);
}
