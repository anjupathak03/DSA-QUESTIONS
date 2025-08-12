#include<bits/stdc++.h>
using namespace std;

void sumofthenoinstring(string input){
   int sum =0;
   int num =0;
   for(int i=0; i<input.size(); i++){
    if(isdigit(input[i])){
        num = 10*num + (input[i] - '0');
    }
    else{
        sum = sum + num;
        num = 0;
    }
   }
   sum = sum + num;
   cout<<sum;
}
int main(){
    string input;
    getline(cin, input);
    sumofthenoinstring(input);
}