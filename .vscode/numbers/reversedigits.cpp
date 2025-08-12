#include<bits/stdc++.h>
using namespace std;
//reversedigit  =  reversedigit*10 + digit; remember this
int reversed(int n){
    int reversedigit = 0;
    while(n > 0){
       int digit = n % 10;
       reversedigit  =  reversedigit*10 + digit;
       n = n/10;

    }
    return reversedigit;
}

int main(){
    int n =1996;
   int ans = reversed(n);
   cout<<ans;
}