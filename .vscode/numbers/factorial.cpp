#include<bits/stdc++.h>
using namespace std;

int fibbonaccii(int n){
  if(n==0){
    cout<<1;
  }
  else{
    int num = 1;
    for(int i=1; i<=n; i++){
         num = num*i;
    }
    cout<<num;
  }
}
int main(){
    int n;
    cin>>n;
   
    fibbonaccii(n);
 return 0;
}