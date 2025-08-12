#include<bits/stdc++.h>
using namespace std;

int factors(int n, int m){
    for(int i = min(m, n) ; i>0; i--){
        if(m%i ==0 && n%i==0){
            return i;
        }
    }
   
}
int main(){
    int n;
    int m;
    cin>>n>>m;
   int ans  = factors(n,m);
   int lcm = (n*m)/ans;
   cout<<lcm;
 return 0;
}