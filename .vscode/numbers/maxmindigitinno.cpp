#include<bits/stdc++.h>
using namespace std;

void maxmindig(int n){
    int digit = 0;
    int maxi = INT_MIN;
    int mini = INT_MAX;
    while(n>0){
        digit = n%10;
        maxi = max(maxi, digit);
        mini = min(mini, digit);
       n = n/10;
    }
    cout<<maxi<<" "<<mini;
}

int main(){
    int n =23004;
   maxmindig(n);
   //cout<<ans;
}