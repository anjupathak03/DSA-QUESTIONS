#include<bits/stdc++.h>
using namespace std;

bool factors(int n){
   int sq = n*n;

 
   while(n!=0){
 if(n%10 != sq%10){
    return false;
 }
 n = n/10;
 sq =sq/10;
   }
   return true;
}
int main(){
    int n;
    cin>>n;
   bool ans  = factors(n);
   cout<<ans;
 return 0;
}