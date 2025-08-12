#include<bits/stdc++.h>
using namespace std;

int fibbonaccii(int n){
  if(n==0){
    cout<<0;
  }
 
  else{
    int secondlast = 0;
    int last =1;
    cout<<secondlast<<" "<<last<<" ";
    int curr;
    for(int i=2; i<=n; i++){
    curr = last + secondlast;
    secondlast = last;
    last = curr;
    cout<<curr<<" ";
    }
  }
// if(n<=1){
//    return n; 
// }
// return fibbonaccii(n-1) + fibbonaccii(n-2);
}
int main(){
    int n;
    cin>>n;
   
    fibbonaccii(n);
 return 0;
}