#include<bits/stdc++.h>
using namespace std;


bool checkarm(int n){
    int num =n;
    int sum =0;
   for(int i=1; i<=n/2; i++){
    if(n%i == 0){
        sum = sum +i;
    }
   }
   if(sum>num){
    cout<<"yes";
   }
   else{
    cout<<"no";
   }
}

int main(){
    int n;
   cin>>n;
   checkarm(n);
}