#include<bits/stdc++.h>
using namespace std;


int octtodec(int n){
    int decnum =0;
    int pow =1;
    while(n!=0){
         int rem = n%10;
         n = n/10;
         decnum = decnum + (rem*pow);
         pow = pow*8;
    }
    return decnum;
}

int main(){
    int n;
    cin>>n;
    cout<<octtodec(n);
}