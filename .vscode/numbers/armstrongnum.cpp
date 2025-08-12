#include<bits/stdc++.h>
using namespace std;


bool checkarm(int n){
    int k = n;
    
    int size =  to_string(n).size();
    int sum = 0;
    while(n>0){
        int ans = n % 10;
        sum = sum + (ans*ans*ans);
        n = n/10;

    }
   
    if(sum == k){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int n = 153;
    bool fin = checkarm(n);
    cout<<fin;
}