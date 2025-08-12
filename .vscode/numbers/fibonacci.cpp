#include<bits/stdc++.h>
using namespace std;
bool fibonaccis(int n){
    if(n==0){
        cout<<0;
    }
    else if(n==1){
           cout<<0<<" "<<1;
    }
    else{
    for(int i=2; i<n; i++){
         i = (i -1)+ (i-2);
         cout<<i<<" ";
         
    }
}
int main(){
    int n = 5;
     fibonaccis(n);
}