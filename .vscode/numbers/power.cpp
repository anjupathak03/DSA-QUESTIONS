#include<bits/stdc++.h>
using namespace std;

int power(int n, int k){
    int ans = 1;
 for(int i=1; i<=k; i++){
    ans = ans*n;
 }
 cout<<ans;
}
int main(){
    int n;
    int k;
    cin>>n>>k;
   
    power(n, k);
 return 0;
}