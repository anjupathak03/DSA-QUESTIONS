#include<bits/stdc++.h>
using namespace std;

int factorialofno(int digit){
    int num =1;
    for(int i=1; i<=digit; i++){
     num = num*i;
    }
    return num;
    
}

void stronnumber(int n){
    int original_n = n;
    int digit = 0;
    int sum =0;
   while(n!=0){
    digit = n%10;
    sum = sum + factorialofno(digit);
    n = n/10;
   }
   if(sum == original_n){
    cout<<"yes";
   }
   else{
    cout<<"no";
   }
}
int main(){
    int n;
    cin>>n;
    stronnumber(n);
 return 0;
}