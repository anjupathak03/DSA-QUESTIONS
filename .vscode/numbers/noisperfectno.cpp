#include<bits/stdc++.h>
using namespace std;

bool checkperfectno(int n){
    int sum =0;
    for(int i=1; i<n; i++){
        if(n%i == 0){
            sum =sum + i;
        }
    }
    if(sum == n){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int n =6;
   bool ans = checkperfectno(n);
   cout<<ans;
}