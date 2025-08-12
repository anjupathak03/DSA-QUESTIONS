#include<bits/stdc++.h>
using namespace std;


bool checkarm(int n){
    int num =n;
    int sum =0;
   while(n!=0){
    int digit = n%10;
    sum = sum + digit;
    n = n/10;
   }
   if(num % sum == 0){
    cout<<"yes";
   }
   else{
    cout<<"false";
   }
}

int main(){
    int n;
   cin>>n;
   checkarm(n);
}